#include<iostream>
using namespace std;
int sum(int m[],int a[],int n)
{
        m[0]=a[0];
        m[1]=a[0]>a[1]?a[0]:a[1];
        for(int i=2;i<n;i++)
        {
            m[i]=(a[i]+m[i-2])>m[i-1]?(a[i]+m[i-2]):m[i-1];
        }

    return m[n-1];
}
int main()
{
    int a[]={98,-1,38,100,-199,379,567,-500};
    int m[8];
    cout<<sum(m,a,8);
    return 0;
}
