#include<iostream>
#include<string.h>
#include<climits>
using namespace std;
int main()
{
    int t;
    char l1[200000];
    char l2[200000];
    char *cur1,*cur2;
    char*next1,*next2;
    long long int count1;
    long long int count2;
    int flag;
    int flag2=0;
    cin>>t;
    while(t--)
    {
        flag2=0;
        flag=0;
        count1=0;
        count2=0;
        cin>>l1;
        cin>>l2;
        int len=strlen(l1);
        if((l1[0]=='#'&& l2[0]=='#')||((l1[len-1]==l2[len-1])&&l1[len-1]=='#'))
            {cout<<"No\n";}
        else{
             if(l1[0]=='.'&&l2[0]=='#')
             {
                 cur1=l1;
                 next1=l2;
                 cur2=l1;
                 next2=l2;
                 count2=INT_MAX;
                 flag=1;
             }
             else if(l1[0]=='#'&&l2[0]=='.')
             {
                 cur1=l2;
                 next1=l1;
                 cur2=l2;
                 next2=l1;
                 count2=INT_MAX;
                 flag=1;
             }
             else if(l1[0]=='.'&&l2[0]=='.')
             {
                 cur1=l1;
                 next1=l2;
                 cur2=l2;
                 next2=l1;
             }
             int i=0;
            // cout<<cur<<"\n"<<next;
            while(i<len)
                {
                    if((cur1[i+1]=='#'&&next1[i]=='.')||(cur1[i+1]=='#')&&next1[i+1]=='.')
                    {
                        char*temp=cur1;
                        cur1=next1;
                        next1=temp;
                        count1++;

                    }
                    else if(cur1[i+1]=='#'&&next1[i+1]=='#')
                            {

                                cout<<"No\n";
                                flag2=1;
                                break;
                            }
                    i++;

                }
                if(flag2==1)
                    continue;
                i=0;
                if(flag==0){
           while(i<len)
                {
                    if((cur2[i+1]=='#'&&next2[i]=='.')||(cur2[i+1]=='#')&&next2[i+1]=='.')
                    {
                        char*temp=cur2;
                        cur2=next2;
                        next2=temp;
                        count2++;

                    }
                    else if(cur1[i+1]=='#'&&next1[i+1]=='#')
                            {

                                cout<<"No\n";
                                flag2=1;
                                break;
                            }
                    i++;

                }}
            if(flag2==1)
                    continue;
            int count=min(count1,count2);
            cout<<"Yes\n";
            cout<<count<<"\n";
        }

    }

}
