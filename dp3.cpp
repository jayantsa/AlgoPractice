#include<iostream>
using namespace std;
int count(int n,int arr[],int t[],int tof[])
{
    if(n==0)
        {
            return 1;
        }
    if(t[n]>0)
        return t[n];
    int x=count(n-1,arr,t,tof);
    //tof[n-1]=(arr[n]<arr[n-1])?(tof[n-1]+1):tof[n-1];
    //tof[n]=(arr[n]>arr[n-1]?tof[n-1]+1:1);
    if(arr[n]>arr[n-1]&&arr[n]>arr[n-1])
        tof[n]=tof[n-1]+1;
    else if(arr[n]<=arr[n-1]&&arr[n]>arr[n+1])
        tof[n]=2;
    else
        tof[n]=1;
  /*  if(arr[n]>arr[n+1])
    {
       tof[n]++;
       //t[n-1]++;
        //x++;
    }*/
    t[n]=x+tof[n];
    cout<<"\n"<<t[n]<<" "<<tof[n]<<"\n";
    return t[n];
}
int main()
{
    int n;
    cin>>n;
    int arr[n],t[n],tof[n];
    //arr[0]=1;
    t[0]=1;
    tof[0]=1;
    for(int i=0;i<n;i++)
      cin>>arr[i];

    for(int i=1;i<n;i++)
        t[i]=-1;
    cout<<count(n-1,arr,t,tof);
    return 0;

}
