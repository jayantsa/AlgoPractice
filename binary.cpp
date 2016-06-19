#include<iostream>
#include<math.h>
using namespace std;
int power(int m)
{
    int k=1;
    for(int i=0;i<m;i++)
        k=k*2;
    return k;
}
int main()
{
    int n,m;
    cin>>n>>m;
    char str[n][m];
    int arr[m];
    int k=0;
    for(int i=0;i<n;i++)
    {
        cin>>str[i];

    }
    for(int i=0;i<n;i++)
    {
    k=0;
        for(int j=0;j<m;j++)
        {
        if(str[i][j]=='1')
        {
            k=k+pow(2,m-j-1);
        }

        }
        arr[i]=k;

    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\n";
    int ans=arr[0];
    for(int i=1;i<n;i++)
        ans=ans^arr[i];
    cout<<ans/n<<" ";
    cout<<ans%n;
    return 0;

}
