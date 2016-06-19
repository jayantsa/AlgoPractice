#include<iostream>
#include<unordered_set>
#include<climits>
using namespace std;
int main()
{

    unordered_set<char> s;
    long long int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a;
        //cin.ignore(INT_MAX,'\n');
        cin>>b;
        //cin.ignore(INT_MAX,'\n');
        //cin.ignore(INT_MAX);
        //cin.clear();

        //getline(cin,a);
        //getline(cin,b);
        for(long long int i=0;i<a.size();i++)
        {
            if(s.find(a[i])==s.end())
            {
                s.insert(a[i]);
            }
            else
                continue;
        }
        long long int coun=0;
        for(long long int i=0;i<b.size();i++)
        {
            if(s.find(b[i])!=s.end())
            {
                coun++;
            }else
            continue;
        }
        s.clear();
        cout<<coun<<"\n";
    }
    return 0;
}
