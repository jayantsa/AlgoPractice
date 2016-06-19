#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a[20005];
        long long int size=0;
        long long int n,m;
        cin>>n>>m;
        for(long long int i=0;i<m;i++)
            cin>>a[i];
        sort(a,a+m);
        long long int i=0;
        long long int j=m-2;
        while(a[m-1]!=n)
        {
            if(a[i]>=1&&(a[i]+a[m-1])!=n)
            {
                a[m-1]=a[m-1]+a[j]+1;
                a[i]--;
                a[j]=0;
                j--;
                size++;
            }
            else if(a[i]!=0&&(a[i]+a[m-1])==n)
            {
                size++;
                a[m-1]+=a[i];
            }
            else if(a[i]==0)
            {
                i++;
            }
        }
        cout<<size<<"\n";



    }

}
