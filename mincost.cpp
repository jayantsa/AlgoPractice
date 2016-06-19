#include<iostream>
using namespace std;
int main()
{
    int arr[100][100];
    int sol[100][100];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    sol[0][0]=arr[0][0];
    for(int i=1;i<n;i++)
    {
        sol[i][0]=arr[i][0]+sol[i-1][0];
    }
    for(int i=1;i<m;i++)
    {
        sol[0][i]=arr[0][i]+sol[0][i-1];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            sol[i][j]=min(sol[i-1][j-1],min(sol[i-1][j],sol[i][j-1]))+arr[i][j];
        }
    }
    cout<<sol[n-1][m-1]<<"\n";
}

