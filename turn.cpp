#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
unsigned long long pow2roundup (unsigned long long int x)
{
    if (x < 0)
        return 0;
    --x;
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    return x+1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    unsigned long long int n;
    while(t--)
    {
        cin>>n;
        if(n==1){
        cout<<"Richard\n";
        continue;
        }
        int turn=1;
        while(n!=1&&n>0)
            {

              if(((n>>1)&1)==0)
               {
                   n=(n>>1);
                 //  cout<<"1:"<<n<<"\n";
                   turn=(turn==0)?1:0;
               }
             else
             {

                  unsigned long long int y=n;
                  unsigned long long int a=pow2roundup(n);
                  n=y-(a/2);
                  // cout<<"4:"<<n<<"\n";
                  turn=(turn==0)?1:0;

            }

          }
        if(turn==0)
            cout<<"Louis\n";
        else
            cout<<"Richard\n";
       }
    return 0;
}

