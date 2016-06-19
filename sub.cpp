#include<iostream>
#include<vector>
using namespace std;
long long int x[100000];
int main()
{
    //int arr[10000][10000];
    int t;
    cin>>t;
    while(t--)
    {
        long long int count=0;
        int n;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            long long int s;
            cin>>s;
            x[i]=s;
        }
        vector< vector<long long int> >arr;
        vector<long long int>v;
        v.push_back(1);
        for(int i=0;i<n;i++)
        {
            count++;
            arr.push_back(v);
        }


        for(int i=0;i<n;i++)
        {
            for(int j=1;j<n-i;j++)
            {
                if(arr[i][j-1]==1 && x[j+i-1]<=x[j+i])
                {
                    arr[i].push_back(1);
                    count++;
                }
                else
                    arr[i].push_back(0);
            }

        }



        cout<<count<<"\n";

    }

}
