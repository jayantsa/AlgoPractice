#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        long long int n,m;
        cin>>n>>m;
        long long int a=n>>1;
        long long int b=m>>1;
        if(n==1&&m>2||m==1&&n>2)
        {
            cout<<"No\n";
        }
        //else if((a<<1)!=n&&(b<<1)!=m)
        else if((n%2)!=0&&(m%2)!=0)
        {

            cout<<"No\n";
        }
        else{
            cout<<"Yes\n";
        }


    }
    return 0;
}
