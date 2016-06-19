#include<iostream>
using namespace std;
bool lucky(int n)
{
    static int counter=2;
    if(n<counter)
        return 1;
    if(n%counter==0)
        return 0;
    int nextp=n;
    nextp-=nextp/counter;
    counter++;
    return lucky(nextp);

}
int main()
{
    int n;
    cin>>n;
    if(lucky(n))
        cout<<"it is a lucky number";
    else
        cout<<"it is not a lucky number";
    return 0;


}
