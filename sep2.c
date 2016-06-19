#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a[20005];
        long long int size=0;
        long long int n,m;
        long long int i;
        long long int j=m-2;
        scanf("%lld%lld",&n,&m);
        for(i=0;i<m;i++)
            scanf("%lld",&a[i]);
        qsort(a,m,sizeof(long long int),cmpfunc);
        i=0;

        while(a[m-1]!=n)
        {
            if(a[i]>=1&&(a[i]+a[m-1])!=n)
            {
                a[m-1]=a[m-1]+a[j]+1;
                a[i]--;
                a[j]=0;
                j--;
                size++;
            }
            else if(a[i]!=0&&(a[i]+a[m-1])==n)
            {
                size++;
                a[m-1]+=a[i];
            }
            else if(a[i]==0)
            {
                i++;
            }
        }
        printf("%lld\n",size);



    }

}



