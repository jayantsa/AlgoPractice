#include<iostream>
using namespace std;
void prety(int n)
{
    if(n==1)
    {
        cout<<n;
        return;
    }
    for(int j=0;j<n;j++)
        cout<<n;
    cout<<"\n";
    cout<<n;
    prety(n-2);
    cout<<n;
    cout<<"\n";
    for(int j=0;j<n;j++)
        cout<<n;

}
int main()
{
    prety(5);
    return 0;
}
