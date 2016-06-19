#include<stdio.h>
char* findDigitsInBinary(int A) {
	// SAMPLE CODE

	  char* result = (char *)malloc(100 * sizeof(char));
	  // DO STUFF HERE
	  int i=1,j;
	  int a=A;
	  while(a>0)
	  {
	      int x=a%2;
	      result[i]=x;
	      a=a/2;
	      i++;

	  }
	  prinf("%s\n",result);
	  char* resul = (char *)malloc(100 * sizeof(char));

	  for(j=i-1;j>=1;j--)
	  {
	      resul[j]=result[j];
	  }
	  resul[0]='\0';
	  return resul;


}
int main()
{
    printf("%s",findDigitsInBinary(6));
}
