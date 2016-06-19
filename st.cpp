#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str1[10000];
    int arr[26];
    for(int i=1;i<=2;i++)
    {
        cin>>str1;
        int y=i-1;
        for(int j=0;str1[j]!='\0';j++)
            {
            int x=str1[j]-'a';
            if(arr[x]<i&&arr[x]==y)
                arr[x]+=1;
         }
    }
    int count=0;
      for(int i=1;i<=2;i++)
    {
        for(int j=0;str1[j]!='\0';j++)
            {
            int x=str1[j]-'a';
             if(arr[x]!=2)
                count++;
            }
    }
    for(int i=0;i<26;i++)
        cout<<arr[i]<<"\n";
    return 0;
}
