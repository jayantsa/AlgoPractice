#include<iostream>
using namespace std;
int main()
{
    int arr[9][9];
    int A=5;
    int k=0,l=0;
    int y=9;
    int j=9;
    while(k<j&&l<y)
    {
        for(int i=l;i<y;i++)
          arr[k][i]=A;
        k++;

        for(int i=k;i<j;i++)
          arr[i][y-1]=A;
         y--;

        if(k<j)
        {
            for(int i=y-1;i>=l;i--)
              arr[j-1][i]=A;
             j--;
        }
        if(l<y)
        {
            for(int i=j;i>=k;i--)
              arr[i][l]=A;
             l++;
        }
        A--;


    }


    for(int i=0;i<9;i++)
        {for(int j=0;j<9;j++)
         {cout<<arr[i][j];
         }
         cout<<"\n";
        }






}
