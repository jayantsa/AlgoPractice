#include<iostream>
#include<string>
using namespace std;
void reve(int i,int j,string &A)
{
    char s;
    while(i<j)
    {
        s=A[i];
        A[i]=A[j];
        A[j]=s;
        i++;
        j--;
    }
}
void reverseWords(string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int i=0;
    int start=0;
    string b;
    cout<<"0"<<b;
    while(i<A.size())
    {
        b.push_back(A[i]);
        if(A[i]==' ')
        {
            while(A[i+1]==' ')
            {
                i++;
            }
        }
        i++;

    }
   // cout<<b;
    b.push_back('\0');
    i=0;
    while(i<=b.size()){
        if(b[i]==' ')
        {
            reve(start,i-1,b);
            cout<<"1"<<b<<"\n";
            start=i+1;
        }
        else if(b[i]=='\0')
        {
            reve(start,i-1,b);
            cout<<"2"<<b<<"\n";
        }

        i++;

    }
    reve(0,b.size()-1,b);
    cout<<"3"<<b<<"\n";
    A=b;
   // cout<<"\n"<<b;
    //A.erase(A.begin(),A.end());
    /*for(int i=0;i<=b.size();i++)
    {

        A[i]=b[i];
    }*/

}
int main()
{
    string a;
    cin>>a;
    reverseWords(a);
    cout<<a;
    return 0;

}


