#include<iostream>
#include<vector>
#include<stdlib.h>
#include<cmath>
using namespace std;
int firstMissingPositive(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int flag=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]>0)
        {
            flag=1;
            break;
        }
    }
    if(!flag)
    {
        return 1;
    }
    flag=0;
    for(int i=0;i<A.size();i++)
    {
        cout<<i<<" ";
        if(A[i]>0)
        {
            if(A[i]-1<A.size()&&A[A[i]-1]>0)
            {
                A[A[i]-1]=(-1*A[A[i]-1]);
            }
        }
    }
    for(int i=0;i<A.size();i++)
        cout<<A[i]<<" ";
    cout<<"\n";
    int i=0;
    for(;i<A.size();i++)
    {
        if(A[i]>0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    return i+1;
    else
    return A.size();
}

int main()
{
    vector<int>a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);

    }
    cout<<"done";
    int ans=firstMissingPositive(a);
    cout<<ans;

}
