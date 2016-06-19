#include<iostream>
#include<vector>
using namespace std;
long long int func(int j,vector<long long int> &A,long long int first,long long int last,long long int sum,int n)
{
    if(j>n)
    {
        return sum;
    }
   // cout<<"sum:"<<sum<<"\n";
    long long int x=(first%1000000007*A[j]%1000000007)%1000000007;
    long long int y=(last%1000000007*A[j]%1000000007)%1000000007;
    return (func(j+1,A,A[j]%1000000007,last%1000000007,(sum%1000000007+x)%1000000007,n)%1000000007+func(j+1,A,first%1000000007,A[j]%1000000007,(sum%1000000007+y)%1000000007,n)%1000000007)%1000000007;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int x;
        vector<long long int>a;
        for(int i=0;i<=n;i++)
        {
            cin>>x;
            a.push_back(x%1000000007);
        }
        long long int ans=func(1,a,a[0]%1000000007,a[0]%1000000007,0,n);
        cout<<ans<<"\n";
    }
    return 0;
}
