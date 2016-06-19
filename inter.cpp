#include<iostream>
#include<Algorithm>
#include<math.h>
#include<vector>
using namespace std;

int main()
{

    vector<int>a;
    int A;
    cin>>A;
    int x=A;
    a.push_back(1);
    if(A%2==0)
    a.push_back(2);
    while(A%2==0)
    {

        A=A/2;
    }
    cout<<A<<"\n";
    for(int i=3;i<=sqrt(A);i=i+2)
    {
        if(A%i==0)
          a.push_back(i);
        while(A%i==0)
          {
              A=A/i;

          cout<<A<<" "<<i<<"\n";
    }
    }
    if(A>2)
      a.push_back(A);
    else
      a.push_back(x);
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
}
