#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int r,g,b;
        cin>>r>>g>>b;
        long long int k;
        cin>>k;
        long long int j=0;
        j+=r>(k-1)?k-1:r;
        j+=g>(k-1)?k-1:g;
        j+=b>(k-1)?k-1:b;
        long long int x=(j)+1;
        cout<<x<<"\n";

    }
    return 0;
}
