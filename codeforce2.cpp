#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main()
{
    unordered_map<string,string> x;
    unordered_map<string,string> sol;
    int q;
    cin>>q;
    while(q--)
    {
        string a,b;
        cin>>a>>b;
        if(x.find(a)!=x.end())
        {
            string w=x[a];
            x.erase(a);
            pair<string,string>p=make_pair(b,w);
            x.insert(p);
        }
        else{
            pair<string,string>p=make_pair(b,a);
            x.insert(p);
        }
    }
    unordered_map<string,string>::iterator it;
    int coun=x.size();
    cout<<coun<<"\n";
    for(it=x.begin();it!=x.end();it++)
    {
        cout<<it->second<<" "<<it->first<<"\n";
    }
 return 0;
}
