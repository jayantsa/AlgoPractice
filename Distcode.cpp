#include<iostream>
#include<unordered_set>
#include<stdlib.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        unordered_set<string> x;
        string s;
        cin>>s;
        string j;
        for(int i=0;i<s.size()-1;i++)
        {
            string j;
            j.push_back(s[i]);
            j.push_back(s[i+1]);
           // cout<<j<"\n";
            if(x.find(j)==x.end())
            {
                x.insert(j);
                count++;
            }


        }
        cout<<count<<"\n";

    }
    return 0;

}
