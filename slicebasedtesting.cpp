#include<fstream>
#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void printslice(char a[],int mark[],int k){
    cout<<"\n------------------------------------------\n";
    int cur=1,flag=0,i,braces=0,temp;
    char curline[1000];
    int len = strlen(a);
    int j=0;
    for(i=0;i<len-3;i++){
        while(mark[j]!=cur){
            if(a[i]=='\n'){
                cur++;
            }
            else{
                i++;
            }
        }
        cout<<a[i];
        if(a[i]=='{')braces++;
        else if (a[i]=='}')braces--;
        else if(a[i]=='\n'){
            cur++;
            j++;
            if(j>k){
                break;
            }
        }
    }
    for(;braces>0 && i<len-3;i++){
        temp=0;
        while(a[i]!='\n'){
            curline[temp++]=a[i];
            if(a[i]=='}'){
                flag=1;
                braces--;
                i++;
                break;
            }
            i++;
        }
        curline[temp]='\n';
        if(flag==1){
            temp=0;
            while(curline[temp]!='\n'){
                cout<<curline[temp];
                temp++;
            }
        }
        flag=0;
    }
    cout<<"\n\n------------------------------------------\n";
}

int main()
{
	fstream testFile;
	testFile.open("input.txt",ios::in);
	int i=0, lines=0, len=0,slice=1,flag=0;
	char a[1000];
	int mark[1000];

	if(testFile.is_open())
	{
		while(testFile)
		{
			a[i]=testFile.get();
			i++;
		}
		len=strlen(a);
	}
	flag=0;
	int cur=1;
    int k=0;
	for(i=0;i<len-3;i++)
	{
	    if(a[i]=='\n')
        {
            if(!flag){
                mark[k]=cur;
                k++;
            }
            cur++;
            flag=0;
            continue;
        }
		else if(a[i]=='s'){
			if(a[i+1]=='c'){
				if(a[i+2]=='a'){
                    if(a[i+3]=='n'){
                        if(a[i+4]=='f'){
                            if(a[i+5]=='(')
                            {
                                    mark[k]=cur;
                                    cout<<"\nSlice "<<slice++<<endl;
                                printslice(a,mark,k);
                                k++;
                                flag=1;
                            }
                        }
                    }
                }
			}
		}
		else if(a[i]=='p'){
			if(a[i+1]=='r'){
				if(a[i+2]=='i'){
                    if(a[i+3]=='n'){
                        if(a[i+4]=='t'){
                            if(a[i+5]=='f'){
                                int temp=1;
                                while(a[i+temp]!=',' && a[i+temp]!='\n' )
                                    temp++;
                                if(a[i+temp]==','){
                                    mark[k]=cur;
                                    cout<<"\nSlice "<<slice++<<endl;
                                    printslice(a,mark,k);
                                    k++;
                                    flag=1;
                                } else{
                                cur++;
                                flag=0;
                                }

                            }
                        }
                    }
                }
			}
		}
	}

	testFile.close();
	return 0;
}


