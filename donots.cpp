#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int t;
    long long int arr[20005];
    cin>>t;
    while(t--)
    {
        long long int n;
        long long int m,cut,sum;
        cut=0;
        cin>>n>>m;
        for(long long int i=0;i<m;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+m);
        long long int i,j;
        i=0;
        sum=0;
        for(i=0;i<m;i++)
        {
            sum+=arr[i]+1;
            if(sum>=m)
            {
                break;
            }
        }

        cout<<m-i-1<<"\n";
    }
}
