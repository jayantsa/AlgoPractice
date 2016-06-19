/**
 * @input A : array of strings termination by '\0'
 * @input n1 : number of strings in array A
 *
 * @Output string. Make sure the string is '\0' terminated.
 */
#include<stdio.h>
#include<conio.h>
char* longestCommonPrefix(char** A, int n1) {
    //int x;
       int j,min,i;
    int l;
    char s;
    int flag=1;



    for(j=0;j<n1;j++)
    {
        if(strlen(A[j])<min)
        {
            min=strlen(A[j]);
        }
    }
    //printf("\nx:%d\n",min);
    char*x=malloc(min * sizeof(char));
    for(l=0;l<min;l++)
     {
         s=A[0][l];
         for(i=1;i<n1;i++)
         {
            // printf("\n%c:%c\n",A[0][l],A[0][l]);
             if(A[i][l]!=s)
               {
                   //x[l]='\0';
                   flag=0;
                   break;
               }
         }
        // printf("\nx:%s\n",x[l]);
         if(flag==1)
          {x[l]=s;
        // printf("\nx:%c\n",x[l]);
          }
          else
          break;
    }
    x[l]='\0';
    return x;



}


int main()
{
    char *A[]={"","jljljllj"};
    char*x=longestCommonPrefix(A,2);
    printf("%s",x);

}
