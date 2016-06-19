#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    map<int,int>m;
    s='1';
    int i=0;
    while(i<n)
    {
        for(int i=0;i<s.length();i++)
        {
            m[(s[i]-'0')]++;
        }
        s.clear();
        for(int i=0;i<=9;i++)
        {
            if(m[i]>0)
            {
                s.push_back(m[i]);
                s.push_back(i);
            }
        }
        i++;
    }
    cout<<"\n"<<s<<"\n";

}
