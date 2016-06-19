#include<iostream>
#include<vector>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void perm(int a,vector<int> &s,vector<vector<int>> &ans)
{
    if(a>=s.size()-1)
    {
        for(int i=0;i<s.size();i++)
            cout<<s[i];
        cout<<"\n";
        //ans.push_back(s);
        return;
    }
    for(int i=0;a+i<s.size();i++)
    {
     //   for(int i=0;i<s.size();i++)
       //     cout<<s[i];
        //cout<<"\n";
        swap(s[a],s[a+i]);
        perm(a+1,s,ans);
        swap(s[a],s[a+i]);
    }
}

void permute(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<int>> ans;
    perm(0,A,ans);
    //return ans;
}
int main()
{
    char x;
    x=1;
    cout<<x;
    return 0;

}
