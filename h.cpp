#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int arr[100005][2];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long int>brick;
        for(int i=0;i<n;i++)
        {
            long long int k;
            cin>>k;
            brick.push_back(k);

        }
        arr[n][0]=0;
        arr[n-1][0]=brick[n-1];
        arr[n][1]=n;
        arr[n-1][1]=n;
        //cout<<arr[n][0];
        if(arr[n-1][0]==0)
            {
            arr[n-2][0]=brick[n-2];
            arr[n-2][1]=n-1;
        }
        else
            {
            arr[n-2][0]=brick[n-2]+brick[n-1];
            arr[n-2][1]=n;
        }
        for(int i=n-3;i>=0;i--)
            {
            int minindex=i;
            long long int x=arr[i+1][0];
            for(int j=i+1;j<=i+3;j++)
            {
                if(arr[j][0]<x)
                    {
                    x=arr[j][0];
          //          cout<<x<<"\n";
                    minindex=j;
                }

            }
            arr[i][0]=0;
            for(int k=i;k<minindex;k++)
                {
                arr[i][0]+=brick[k];
            }
            arr[i][1]=minindex;
        }
        int i=0;
        long long int sum=0;

        while(i<n)
        {
            sum+=arr[i][0];
            int x=arr[i][1];
            cout<<x<<"\n";
            if(x==n)
                {
                break;
            }
            i=arr[x][1];
            cout<<"i:"<<i<<"\n";

        }

        for(int j=0;j<=n;j++)
         {
            cout<<arr[j][0]<<":"<<arr[j][1]<<"->";

        }

        //cout<<"\n";
       cout<<sum<<"\n";

    }

    return 0;
}
