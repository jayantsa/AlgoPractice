#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int check(int arr1[][100],int arr2[][100],int i,int j,int r,int c)
{
    int z=0;
    for(int k=0;k<r;k++)
     {
        for(int x=0;x<c;x++)
        {
            if(arr1[k+i][j+x]!=arr2[k][x])
            {
                z=1;
                break;
            }
         }
        if(z==1)
            break;
     }
    if(z==1)
        return 0;
    else
        return 1;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    int flag=0;
    int arr1[100][100];
    int arr2[100][100];
    char str[100];
    int R,C,r,c;
    while(t--)
    {
        cin>>R>>C;
        for(int i=0;i<R;i++)
            {
                cin>>str;
                for(int j=0;j<C;j++)
                    arr1[i][j]=str[j]-'0';
            }


        cin>>r>>c;

        for(int i=0;i<r;i++)
            {
                cin>>str;
                for(int j=0;j<c;j++)
                    arr2[i][j]=str[j]-'0';
            }

        for(int i=0;i<R;i++)
         {
            for(int j=0;j<C;j++)
            {
                if(arr1[i][j]==arr2[0][0])
                {
                    if(check(arr1,arr2,i,j,r,c)==1)
                      {
                        flag=1;
                        break;
                      }
                }
                if(flag==1)
                    break;
            }
          }
        if(flag==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
      }
    return 0;
}
