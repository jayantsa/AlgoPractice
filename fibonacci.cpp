#include<iostream>
using namespace std;
void fibo(int arr[],int n)
{
     int a=0;
     int b=1;
    for(int i=2;i<n-1;i++)
    {
        int x=a+b;
        a=b;
        b=x;
    }
    arr[0]=a;
    arr[1]=b;
    arr[2]=a+b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int x=m-n;
        int arr[x];
        fibo(arr,n);
        int s=0;
        int i;
        for(i=3;i<m-n;i++)
           {
               arr[i]=arr[i-1]+arr[i-2];
           }
        cout<<arr[i-1]<<"\n";


    }

}
