#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        vector<long long int > v(3,0);
        int n;
        string s;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='R')
            {
                v[0]++;
            }
            else if(s[i]=='G'){
                v[1]++;
            }
            else{
                v[2]++;
            }
        }
        sort(v.begin(),v.end());
        cout<<v[0]+v[1]<<"\n";
    }
    return 0;
}
