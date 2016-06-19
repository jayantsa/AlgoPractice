#include<iostream>
using namespace std;
int check(int n)
{
    if(n<0)
        {
            cout<<"\n";
            return 0;
        }
    if(n==0)
    {
        cout<<"\n";
        return 1;
    }

   int x=check(n-1)+check(n-2)+check(n-3);
   cout<<x<<" ";
   return x;
}
int main()
{
    cout<<check(4);
}
