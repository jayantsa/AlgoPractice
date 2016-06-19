#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
      int n,t;
    cin>>n>>t;
    int arr[100000];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int min;
    while(t--)
    {
        int i,j;

        cin>>i,j;
        min=arr[i];
        for(int k=i;k<=j;k++)
        {
            if(arr[k]<min)
                min=arr[k];
        }
        cout<<min<<"\n";
    }
    return 0;
}
