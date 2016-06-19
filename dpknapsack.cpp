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
    int a[2000];

    while(t--)
    {
        int m[2005]={0};
        int n,ks;
        cin>>n>>ks;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int j=1;j<=ks;j++)
        {
            m[j]=m[j-1];
            int k=(-1);
            for(int i=0;i<n;i++)
            {
                if(j>=a[i]&&(m[j-a[i]]+a[i])>k)
                    k=m[j-a[i]]+a[i];
            }
            m[j]=max(m[j],k);

        }

        cout<<m[ks]<<"\n";

    }
    return 0;
}
