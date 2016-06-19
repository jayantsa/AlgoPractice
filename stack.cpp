#include<iostream>
#include<stack>
using namespace std;
int main(){
    string A;
    cin>>A;
    stack<char>s;
    int i=0;
    int flag=0;
 while(i<A.size())
    {
        //char ch=A[i];
        char ch=A[i];
        cout<<"ch"<<ch<<"\n";
        if(ch=='{'||ch=='['||ch=='('||ch=='+'||ch=='-'||ch=='/'||ch=='*')
        {
            s.push(ch);
        }
        else if(ch=='}'||ch==']'||ch==')')
        {
            char x=s.top();
            cout<<"x:"<<x<<"\n";
            if(x=='-'||x=='/'||x=='*'||x=='+')
            {
                char z;

                if(ch=='}')
                {
                    z='{';
                }
                else if(ch==')')
                {
                    z='(';
                }
                else if(ch==']')
                {
                    z='[';
                }
                cout<<"z"<<z<<"\n";
                while(s.top()!=z)
                {
                    cout<<"s.top:"<<s.top()<<"\n";
                    s.pop();
                }
                s.pop();
            }
            else
            {
                flag=1;
                break;
            }
        }
        i++;
    }
    if(flag==1)
    {
        cout<<"no";
    }
    if(s.empty())
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
   // cout<<"\n"<<flag;
   return 0;
}
