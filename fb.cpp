/**
 * @input A : Integer
 *
 * @Output string. Make sure the string ends with null character
 */
 #include<stdio.h>
void countAndSay(int A) {
    int count=0;
    int x=0,c;
    int length;
    char*str=(char*)malloc(1*sizeof(char));
    str="1";
    int i=0,k=0;
    int final[10]={0};
    int d,e,f;
    int le=0;
    while(x<A)
    {
        length=strlen(str);
        while(i<length)
        {
            c=str[i]-'0';
            final[c]++;
            i++;
        }
        //free(str);
        str=NULL;
        for(i=0;i<=9;i++)
        {
            if(final[i]>0)
            {
               k++;
            }
        }
        str=(char*)malloc((2*k)*sizeof(char));
        for(d=0,e=0;d<10;d++)
        {
            if(final[d]>0)
            {
                str[e++]=final[d];
                str[e++]=d;

            }
        }
        str[e]='\0';
        printf("%s\n",str);

    }
//    return str;
}
int main()
{

    countAndSay(3);
}
