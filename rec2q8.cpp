#include<iostream>
using namespace std;
void num(int n,int k)
{
    if(k>n)
        return;
    for(int i=0;i<10;i++)
    {
    if(k<=n)
    {
    cout<<k<<"\n";
    k*=10;
    num(n,k);
    k/=10;
    k++;
    if(k%10==0)
        return;

    }}

}
int main()
{
    cout<<"enter the number\n";
    int n;
    cin>>n;
    num(n,1);
    return 0;
}
