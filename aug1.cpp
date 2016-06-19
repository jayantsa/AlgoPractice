#include<iostream>
using namespace std;
int main(){

    int t;
    int a,b;
    cin>>t;
    int count;
    while(t--)
    {
        count=0;
        cin>>a>>b;
        while(a!=b){
        if(a>b)
        {

            {
                if(a%2==0)
                {
                    a=a/2;
                    count++;
                }
                else if(a%2!=0)
                {
                    a=(a-1)/2;
                    count++;
                }
            }

        }
        if(a<b)
        {

            {
                if(b%a==0)
                {
                    a=a*2;
                    count++;
                }
                else if(a%2==0)
                {
                    a=a/2;
                    count++;
                }
                else if(a%2!=0)
                {
                    a=(a-1)/2;
                    count++;
                }
            }
        }}
        cout<<count<<"\n";

    }

    return 0;
}
