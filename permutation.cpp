#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

void permut(char arr[],int a,int b)
{
char temp;
    if(a==b)
       printf("%s\n",arr);
  else{
    for(int i=a;i<=b;i++)
    {
        temp=arr[a];
        arr[a]=arr[i];
        arr[i]=temp;
        permut(arr,a+1,b);
        temp=arr[a];
        arr[a]=arr[i];
        arr[i]=temp;

    }
  }

}
int main()
{
    char str[1000];
    cin>>str;

    permut(str,0,strlen(str)-1);
    return 0;


}
