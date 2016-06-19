#include <iostream>
using namespace std;
int min(int a,int b)
{
	return a<=b?a:b;
}
int main()
{
    int p[]={2,3,5,7,11,13,17,19,23};
    int t,hh,mm,ss;
    int b,g;
    cin>>t;
    while(t--)
    {
    	b=0,g=0;
    	cin>>hh>>mm>>ss;
    	while(hh<24)
    	{
    		int i;
    		for(i=0;i<9;i++)
    		{
    			if((hh%p[i]==0)&&(mm%p[i]==0)&&(ss%p[i]==0))
    			  {
    			  	b++;
    			  	break;
    			  }
    		}
    		if(i==9)
    		  g++;
    	 ss=(ss+1)%60;
    	 if(ss==0)
    	  {

    	     mm=(mm+1)%60;
    	     if(mm==0)
    	      {

    	      	hh=(hh+1);
    	      }
    	  }
    	}
    	for(int i=2;i<=min(g,b)&&(g!=0)&&(b!=0);i++)
    	{
    		if((g%i==0)&&(b%i==0))
    		{
    			g=g/i;
    			b=b/i;
    			cout<<"i is:"<<i<<"\n";
    			cout<<b<<":"<<g<<"\n";
    			break;
    		}
    	}
    	cout<<b<<":"<<g<<"\n";

    }
    return 0;
}
