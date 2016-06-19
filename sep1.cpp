#include<iostream>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int arr[505][505]={0};
        int stor[250005][2]={0};
        int n;
        int sum=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
               {
                cin>>arr[i][j];
                stor[arr[i][j]][0]=i;
                stor[arr[i][j]][1]=j;
               }
        }
        /*for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                stor[arr[i][j]][0]=i;
                stor[arr[i][j]][1]=j;
            }

        }*/
       /* for(int i=1;i<=(n*n);i++)
            cout<<stor[i][0]<<" "<<stor[i][1]<<"\n";*/
        for(int i=(n*n);i>=2;i--)
        {
            int x=(stor[i][0]-stor[i-1][0])>0?(stor[i][0]-stor[i-1][0]):(stor[i-1][0]-stor[i][0]);
            int y=(stor[i][1]-stor[i-1][1])>0?(stor[i][1]-stor[i-1][1]):(stor[i-1][1]-stor[i][1]);
            sum=sum+x+y;

        }
        cout<<sum<<"\n";




    }
}
