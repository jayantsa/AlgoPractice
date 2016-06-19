#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long  int n;
        cin>>n;
        unsigned long long int sum=0;
        unsigned long long int a=1;
        unsigned long long int b=2;
        sum=2;
        while(a+b<=n)
        {
            int temp=b;
            b=a+b;
            a=temp;
            if(b%2==0&&b<=n)
                sum+=b;
            cout<<"\n"<<sum<<"\n";
        }
        cout<<sum<<"\n";
    }
    return 0;
}

