#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,n;
    cin>>a>>b>>n;
    unsigned long long int arr[n];
    arr[0]=a;
    arr[1]=b;
    int i;
    for(i=2;i<n;i++)
    {
        arr[i]=(arr[i-1]*arr[i-1])+arr[i-2];
        cout<<arr[i]<<"\n";

    }
    cout<<arr[--i];
    return 0;
}
