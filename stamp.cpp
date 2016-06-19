#include<iostream>
using namespace std;
int main()
{
    //long long int arr[100005];
    long long int x;
    int n;
    cin>>n;
    unsigned long long int sum=0;
    unsigned long long int s=0;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        sum+=x;
        s+=i;
    }

    if(s==sum)
        cout<<"YES";
    else
        cout<<"NO";

}
