#include<iostream>
using namespace std;
void dup(char str[],int i)
{
    if(str[i]=='\0')
        return;
    if(str[i]==str[i+1])
    {
        for(int j=i+1;s[j]!='\0';j++)
            s[j]=s[j+1];
        i--;
    }
    dup(str,i+1);
}
