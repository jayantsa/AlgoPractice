#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    char str[n];
    cin.gets(str,100);
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
            if(str[i]>='a'&&str[i]<='z')
               {

                   if((str[i]+k)>'z')
                    str[i]='a'+(int(str[i])+k-1)%122;
                   else
                     str[i]+=k;
               }
               else
               {
                   if((str[i]+k)>'Z')
                    str[i]='A'+(int(str[i])+k-1)%90;
                   else
                     str[i]+=k;


               }


        }

    }
    cout<<str;
    return 0;
}
