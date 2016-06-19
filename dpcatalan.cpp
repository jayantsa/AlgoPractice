#include<iostream>
using namespace std;

unsigned long long int catelan(unsigned long long int t[],int n)
{
    if(n==0)
    {
        return t[n];
    }
   // cout<<t[n]<<" ";
    if(t[n]!=(-1))
      return t[n];
    else
    {
        t[n]=0;
        for(int i=1;i<=n;i++)
            {
                //cout<<"hey";
                t[n]=t[n]+catelan(t,i-1)*catelan(t,n-i);
                //cout<<t[n]<<"\n";
            }
    }
    return t[n];

}
int main()
{
 int n;
 cin>>n;
 unsigned long long int t[100000];
 t[0]=1;
 for(int i=1;i<=n;i++)
    t[i]={-1};
 cout<<catelan(t,n);
 return 0;
}
