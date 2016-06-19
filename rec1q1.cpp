#include<iostream>
using namespace std;
int bsearch(int arr[],int beg,int end,int num)
{
    int mid=(beg+end)/2;
    if(arr[mid]==num)
        return mid;
    if(beg>end)
        return -1;
    if(num<=arr[mid])
        bsearch(arr,beg,mid-1,num);
    else
        bsearch(arr,mid+1,end,num);

}
int main()
