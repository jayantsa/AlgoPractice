#include<iostream>
using namespace std;
int main()
{
    char a[100];
    cin.get(a);
    int i=0;
    while(a[i]!='\0')
    {
        cout<<a[i]<<"\n";
        i++;
    }
    cout<<"\n"<<a;
}
