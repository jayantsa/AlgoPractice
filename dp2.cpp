#include<iostream>
#include<string>
using namespace std;
int dp(string str1,string str2)
{
    int m=str1.size();
    int n=str2.size();
    int arr[m][n];
    for(int i=0;i<m;i++)
       {for(int j=0;j<n;j++)
          arr[i][j]=0;
       }
    if(str1[m-1]==str2[n-1])
        arr[m-1][n-1]=0;
    else
        arr[m-1][n-1]=1;
    for(int i=n-2;i>=0;i--)
        arr[m-1][i]=arr[m-1][i+1]+1;
    for(int i=m-2;i>=0;i--)
    {
        arr[i][n-1]=arr[i+1][n-1]+1;
    }
    for(int i=m-2;i>=0;i--)
        {
            for(int j=n-2;j>=0;j--)
            {
                int k=0;
                if(str1[i]==str2[j])
                    k=0;
                else
                    k=1;
                arr[i][j]=min((arr[i+1][j+1]+k),min((arr[i+1][j]+1),(arr[i][j+1]+1)));
    cout<<arr[i][j]<<"\n";


            }

        }
        return arr[0][0];

}
int main()
{
    cout<<dp("saturday","sunday");
    return 0;





}
