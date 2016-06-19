#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;
vector<int> findSubstring(string A, const vector<string> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    unordered_map<string,int> h;
    int slength=B[0].size();

    int i=0;
    for(int x=0;x<B.size();x++)
    {
        if(h.find(B[x])!=h.end())
        {

          h[B[x]]++;
        }else{

            h.insert(unordered_map<string,int>::value_type(B[x],1));

        }
    }
     for(int x=0;x<B.size();x++)
        {

           cout<<"Hi";
           cout<< B[x]<<":"<<h[B[x]]<<" ";
           for(int i=0;i<1000000;i++);

        }
        cout<<"\n";

    vector<int> ans;
    while(i<A.size())
    {
        int ins=i;
        int x=B.size();
        int j=0;
        int check=0;
        while(j<x)
        {
            string s;
            for(int k=0;k<slength&&i+k<A.size();k++)
            {
                s.push_back(A[i+k]);
            }
            /*if(s.size()!=slength)
            {
                break;
            }*/
            if(h.find(s)!=h.end()&&h[s]>0)
            {
                cout<<"s:"<<s<<"\n";
                cout<<"h[i]:"<<h[s]<<"\n";
                i=i+slength;
                h[s]--;
                j++;

            }
            else
            {
                break;
            }
        }
        int flag=1;
        for(int x=0;x<B.size();x++)
        {
            cout<<"h[B[x]]:"<<h[B[x]]<<"\n";

            if(h[B[x]]!=0)
            {
                flag=0;
            }

        }
        if(flag)
        {
            ans.push_back(ins);
        }
        for(int x=0;x<B.size();x++)
        {
          h[B[x]]=0;
        }
         for(int x=0;x<B.size();x++)
        {
           if(h.find(B[x])!=h.end())
           {
            h[B[x]]++;
           }
        }

        i=ins+1;
    }
  return ans;
}

int main()
{
    string a;
    vector<string> b;
    cin>>a;
    cout<<"a is "<<a<<"\n";
    int n;
    cout<<"enter n:";
    cin>>n;
    for(int i=0;i<n;i++)
    {

        string s;
        cin>>s;
        b.push_back(s);
    }
    vector<int> x=findSubstring(a,b);
    for(int i=0;i<x.size();i++)
    {
        cout<<x[i]<<" ";

    }
    cout<<"\n";

}
