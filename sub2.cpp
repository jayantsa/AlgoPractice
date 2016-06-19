#include<iostream>
#include<vector>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        vector<long long int>x;
        long long int n;
        bool cont=true;
        long long int start=0;
        cin>>n;
        for(long long int i=0;i<n;i++)
        {
            long long int s;
            cin>>s;
            x.push_back(s);
        }
        vector<long long int> ans;
        for(long long int i=0;i<n;i++)
        {
            ans.push_back(1);
        }
        for(long long int i=1;i<n;i++)
        {
          long long int sum=ans[i-1]+1;
          if(x[i-1]<=x[i])
          {
              sum++;
          }
          if(start<i&&x[i-1]<=x[i])
          {
              sum+=i-start-1;
          }
          else
          {
              start=i;
          }
          ans[i]=sum;
        }
        cout<<ans[n-1]<<"\n";

    }


}
