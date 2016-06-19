#include<iostream>
using namespace std
int count(int n)
{
    int c=0
    if(n==0)
      return 0;
    if(n%10==0)
        c=1+count(n/10);
    else
        c=count(n/10);
    return c

}
