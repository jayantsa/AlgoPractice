#include<iostream>
using namespace std;
long long int power(long long int x,long long int n,long long int d)
{
    if(n==0)
     return 1%d;
    long long int temp=power(x,n/2,d)%d;
    if(n%2==0)
     return (temp*temp)%d;
    else
     return (x*((temp*temp)%d))%d;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        //int flag=0;
        long long int sum=k;
        if(k==1&&n>1)
        {
            sum=0;
            cout<<(sum%1000000007)<<"\n";
            continue;
        }
        k--;
        sum=((sum%1000000007)*power(k,n-1,1000000007))%1000000007;
        cout<<(sum%1000000007)<<"\n";
    }
    return 0;
}
