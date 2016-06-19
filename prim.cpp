#include<iostream>
using namespace std;
int nextprime(int x,int(&arr)[4001])
{
    int i;
    for(i=x+1;i<=4000;i++)
    {
        if(arr[i]==0)
            break;
    }
    return i;

}
int main()
{
    int arr[4001]={0};
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<=4000;i++)
    {
        if(arr[i]==1)
            continue;
        for(int j=i+1;j<=4000;j++)
        {

            if(j%i==0)
                {

                    arr[j]=1;
                }
        }
    }

    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int sum=x+y;
        int ans=nextprime(x+y,arr)-sum;
        cout<<ans<<"\n";

    }
    return 0;


}
