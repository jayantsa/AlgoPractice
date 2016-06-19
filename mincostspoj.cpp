#include<iostream>
#include<string>
using namespace std;
int arr[1001][1001];
int mincost(string a,string b)
{
    for(int i=0;i<=a.size();i++)
    {
        for(int j=0;j<=b.size();j++)
        {
            if(i==0)
            {
                arr[i][j]=30*j;
            }
            else if(j==0)
            {
                arr[i][j]=i*15;
            }
            else if(a[i-1]==b[j-1])
            {
                arr[i][j]=arr[i-1][j-1];
            }
            else
            {
                arr[i][j]=min(15+arr[i-1][j],min(30+arr[i][j-1],45+arr[i-1][j-1]));
            }
        }
    }
    int m=a.size();
    int n=b.size();
    return arr[m][n];
}
int main()
{
    string  a;
    while(1)
    {
        string b;
        cin>>a;
        if(a=="#")
        {
            break;
        }
        cin>>b;
        cout<<mincost(a,b)<<"\n";

    }


return 0;

}
