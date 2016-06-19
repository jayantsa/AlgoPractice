#include<iostream>
#include<unordered_set>
using namespace std;
#define gc getchar_unlocked
inline long long int fast_input()
{
	char t;
	long long int x=0;
	long long int neg=0;
	t=gc();
	while((t<48 || t>57) && t!='-')
		t=gc();
	if(t=='-')
		neg=1;
	else
	{
		while(t>=48 && t<=57)
		{
			x=(x<<3)+(x<<1)+t-48;
			t=gc();
		}
	}
	if(neg)
		x=-x;
	return x;
}
char x;
int y[1000][1000];
int z[1000][1000];

int main()
{

    long long int l,r,q;
    l=fast_input();
    r=fast_input();
    q=fast_input();
    long long int m=0,f=0;
    //unordered_set<int> m;
    //unordered_set<int> f;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<r;j++)
        {

            cin>>x;
            if(i==0&&x=='M')
            {
                y[0][j]=1;
                z[0][j]=0;
                m=1;
            }
            else if(i==0&&x=='F')
            {
                y[0][j]=0;
                z[0][j]=1;
                f=1;

            }
            else if(j==0&&x=='M')
            {
                y[i][0]=1;
                m=1;
                z[i][0]=0;
            }
            else if(j==0&&x=='F')
            {
                y[i][0]=0;
                z[i][0]=1;
                f=1;
            }
            else if(i>0&&j>0&&x=='M')
            {
                y[i][j]=min(y[i-1][j-1],min(y[i-1][j],y[i][j-1]))+1;
                //m.insert(y[i][j]);
                if(y[i][j]>m)
                {
                    m=y[i][j];
                }
            }
            else if(i>0&&j>0&&x=='F')
            {
                z[i][j]=min(z[i-1][j-1],min(z[i-1][j],z[i][j-1]))+1;
                if(z[i][j]>f)
                {
                    f=z[i][j];
                }
            }

        }

    }

    for(long long int i=0;i<q;i++)
    {
        long long int a;
        char c;
        a=fast_input();
        cin>>c;
        if(c=='M'&&a<=m)
            cout<<"yes\n";
        else if(c=='F'&&a<=f)
            cout<<"yes\n";
        else
            cout<<"no\n";
        //int flag=0;

        //if(!flag)
          //  cout<<"no\n";

    }
return 0;
}
