#include<iostream>
using namespace std;
int main()
{
    int eggs,floors;
    cin>>floors>>eggs;

    int arr[eggs+1][floors+1];
    for(int i=1;i<=eggs;i++)
    {
        arr[i][0]=0;
        arr[i][1]=1;
    }

    for(int j=1;j<=floors;j++)
    {
        arr[1][j]=j;
    }

    for(int i=2;i<=eggs;i++)
    {
        for(int j=2;j<=floors;j++)
        {
            int res;
            arr[i][j]=1000000;
            for(int x=1;x<=j;x++)
            {
                res=1+max(arr[i-1][x-1],arr[i][j-x]);
                if(res<arr[i][j])
                {
                    arr[i][j]=res;
                }
            }


        }
    }
cout<<arr[eggs][floors];
}
