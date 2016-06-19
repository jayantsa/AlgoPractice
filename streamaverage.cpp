#include<iostream>
using namespace std;
float avg(float prevavg,int x,int n)
{
    return ((prevavg*n)+x)/(n+1);
}
int main()
{

    int arr[100];
    float pavg=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        pavg=avg(pavg,arr[i],i);
        cout<<"the average of no.is"<<pavg<<"\n";

    }
    return 0;
}

