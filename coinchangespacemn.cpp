#include<iostream>
using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;
    vector<int> arr(m,-1);
    for(int i=0;i<m;i++)
        cin>>arr[i];
    int ans[n+1][m];
    for(int i=0;i<m;i++)
        ans[0][i]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int x=(i-arr[j])>=0?ans[i-arr[j]][j]:0;
            int y=(j-1)>=0?ans[i][j-1]:0;
            ans[i][j]=x+y;
        }

    }
    cout<<ans[n][m-1];
}
