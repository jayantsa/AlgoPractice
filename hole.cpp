#include<iostream>
using namespace std;
int main()
{
    int arr[26]={0};
    for(char i='A';i<='Z';i++)
    {
        if(i=='A'||i=='D'||i=='O'||i=='P'||i=='R'||i=='Q')
        {
            arr[i-65]=1;

        }
        else if(i=='B')
        {

            arr[i-65]=2;
        }

    }
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            c+=arr[s[i]-65];
        }
        cout<<c<<"\n";

    }
    return 0;

}
