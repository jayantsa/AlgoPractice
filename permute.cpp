#include<iostream>
using namespace std;
int permut(char str[],int i,int j)
{
    static int count=0;
    if(i==j)
        {
            count++;
            cout<<str<<"\n";
            return 0;
        }

    for(int k=i;k<j;k++)
    {
        swap(str[i],str[k]);
        permut(str,i+1,j);
        swap(str[i],str[k]);
    }

   return count;
}
int main()
{
    char str[]="abcde";
    //cout<<str;
    cout<<permut(str,0,5);
    return 0;
}
