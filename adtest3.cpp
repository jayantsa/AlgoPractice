#include<iostream>
using namespace std;
int	main()	{
char	arr[]	="abcd";
char *p	=arr;
cout<<*(&p)<<"\n";
cout<<arr;
/*if	(&p	==	&arr)	{
cout	<<	“Same”;
}	else	{
cout	<<	“Not	Same”;
}*/
}
