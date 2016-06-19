#include"btree.h"
#include<iostream>
using namespace std;
int main()
{
    btree<int> a;
    a.create();
    a.btreeprint();
    cout<<"\n";
   // a.lprint();
  // a.pheight();
    //a.findel();
   // a.psum();
   /*a.trmirror();
   cout<<"\n";
   a.btreeprint();*/
   //a.pleafcount();
   a.plevelorder();
}
