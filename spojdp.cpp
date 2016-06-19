#include<iostream>
using namespace std;
long long int ans[10001];
int main()
{
    long long int t;
    cin>>t;
    ans[0]=0;
    for(int k=1;k<=t;k++)
    {
        long long int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            long long int x;
            cin>>x;
            if(i==1)
            {
                ans[i]=x;
                continue;
            }
            ans[i]=max(ans[i-1],ans[i-2]+x);
        }
        cout<<"Case "<<k<<": "<<ans[n]<<"\n";
    }
    return 0;
}

