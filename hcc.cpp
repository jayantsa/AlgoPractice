#include<iostream>
using namespace std;
int main()
{
   //int t;
   cout<<"hey";
   long long int c[100001];
   long long int dp[100001];
   long long int b[100001];
   c[0]=1;
      for(int i = 1; i<=100000; i++)
      c[i] = (c[i-1]*2)%1000000007;
   int t;
   cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      long long int a[n+1];

      for(int i=0;i<=n;i++)
	    {
		cin>>a[i];
		if(i==1)
				b[2]=(2*(a[1]+a[0]))%1000000007;
			else if(i>1)
				b[i+1]=(b[i]+c[i]*a[i])%1000000007;
		}
		dp[1]=a[0]%1000000007;
		dp[2]=(2*a[0]*a[1])%1000000007;
		for(int i=3; i<=n+1; i++)
		{
			dp[i]=((2*dp[i-1])+(a[i-1]*b[i-1]))%1000000007;
		}
		cout<<dp[n+1]%1000000007<<"\n";;
  }
return 0;
}
