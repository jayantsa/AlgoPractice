#include<iostream>
#include<string>
using namespace std;
int arr[2001][2001];
int editD(string a,string b)
{
    arr[0][0]=0;
    for(int i=1;i<=a.size();i++)
    {
        arr[i][0]=i;
    }
    for(int i=1;i<=b.size();i++)
    {
        arr[0][i]=i;
    }
    for(int i=1;i<=a.size();i++)
    {
        for(int j=1;j<=b.size();j++)
        {
            if(a[i-1]==b[j-1])
            {
                arr[i][j]=arr[i-1][j-1];
            }
            else
            {
                arr[i][j]=min(arr[i-1][j-1],min(arr[i-1][j],arr[i][j-1]))+1;
            }
        }
    }
    int m=a.size();
    int n=b.size();
    return arr[m][n];
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        cout<<editD(a,b)<<"\n";
    }

}
