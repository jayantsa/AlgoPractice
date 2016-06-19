#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct box
{
    int h,w,d;

};
int min(int a,int b)
{
    return a<b?a:b;

}

int max(int a,int b)
{
    return a>b?a:b;

}

int compare(box a,box b)
{
    return (a.w*a.d)>(b.w*b.d);

};
long long int maxHeightStack(vector<box> x)
{
    vector<box> rot;
    int n=x.size();
    for(int i=0;i<n;i++)
    {
        rot.push_back(x[i]);

        box a;
        a.h=x[i].w;
        a.d=max(x[i].h,x[i].d);
        a.w=min(x[i].h,x[i].d);
        rot.push_back(a);

        box b;
        b.h=x[i].d;
        b.d=max(x[i].h,x[i].w);
        b.w=min(x[i].h,x[i].w);
        rot.push_back(b);
    }
    sort(rot.begin(),rot.end(),compare);
    vector<int> answer;
    for(int i=0;i<rot.size();i++)
    {
        cout<<rot[i].w<<" "<<rot[i].d<<" "<<rot[i].h<<"\n";
    }
    for(int i=0;i<rot.size();i++)
    {
        answer.push_back(rot[i].h);
    }
    for(int i=1;i<answer.size();i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if((rot[i].w<rot[j].w)&&(rot[i].d<rot[j].d)&&answer[i]<answer[j]+rot[i].h)
            {
                answer[i]=answer[j]+rot[i].h;
            }

        }
    }
    long long int m=-10000000;
    for(int i=0;i<answer.size();i++)
    {
        if(answer[i]>m)
        {
            m=answer[i];

        }
    }
    return m;

}
int main()
{
    vector<box> x;

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        box a;
        int w,d,h;
        cin>>w>>d>>h;
        a.h=h;
        a.w=w;
        a.d=d;
        x.push_back(a);
    }
    cout<<maxHeightStack(x);
    return 0;
}
