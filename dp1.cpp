#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++)
        cin>>arr[i];
    for(int i=0;i<m;i++)
        cout<<"\n"<<arr[i];
    int a=n+1;
    unsigned long int t[a][m];
    for(int i=0;i<m;i++)
        t[0][i]=1;
    for(int i=1;i<=n;i++)
    {for(int j=0;j<m;j++)
       {
        int x=((i-arr[j])>=0)?t[i-arr[j]][j]:0;
        int y=(j>=1)?t[i][j-1]:0;
        t[i][j]=x+y;
        cout<<t[i][j]<<"\n";
        }
    }
    cout<<t[n][m-1]<<"\n";

    return 0;
}
