#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
    if(a>b)
        return true;
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>x;
        for(int i=0;i<n;i++)
        {
            int s;
            cin>>s;
            x.push_back(s);
        }
        sort(x.begin(),x.end(),compare);
        int sum=0;
        int i=0;
        while(i<n)
        {
            if(i+1<n)
            {
                sum+=x[i]+x[i+1];
                i=i+4;
            }else if(i+1==n)
            {
                sum+=x[i];
                i++;
            }
        }
        cout<<sum<<"\n";
    }

}
