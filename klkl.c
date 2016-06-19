#include<stdio.h>
 int count(const int*A,int n1,int B,int first)
 {
    int beg=0;
    int end=n1;
    int mid=(beg+end)/2;
    int x,result;
    while(beg<=end)
    {
        if(A[mid]==B)
        {
            result=mid;
            if(first==1)
              end=mid-1;
            else
               beg=mid+1;
        }
        if(B<A[mid])
           end=mid-1;
        if(B>A[mid])
           beg=mid+1;
        mid=(beg+end)/2;
    }
    return result;
 }
int findCount(const int* A, int n1, int B) {

   int first,last;
   int x;
   first=count(A,n1,B,1);
   last=count(A,n1,B,0);

   x=(last-first+1);
   return x;



}
int main()
{
    int a[]={1,2,3,5,5,5,5,6,7,8};
    int y=findCount(a,10,5);
    printf("%d",y);

}
