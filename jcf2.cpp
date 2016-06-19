#include<iostream>
#include<vector>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
        return b;
    else
        gcd(b%a,a);

}
int main()
{
    int t;
    cin>>t;
    vector<int>a;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n-1;i++)
        {
            int g=gcd(a[i],a[i+1]);
            if(g==1)
            {


            }
            else

        }

    }

}

