#ifndef btreenode_h
#define btreenode_h
#include<iostream>
using namespace std;
template<typename t>
class btreenode{
 t data;
 btreenode<t>*left;
 btreenode<t>*right;
 public:
     btreenode():data(0),left(NULL),right(NULL){};
     btreenode(t x):data(x),left(NULL),right(NULL){};
     void setdata(t x){
     data=x;
     }
     t getdata()
     {
         return data;
     }
     void setleft(btreenode<t>*x)
     {
         left=x;
     }
     btreenode<t>* getleft()
     {
         return left;
     }
     void setright(btreenode<t>*x)
     {
         right=x;
     }
     btreenode<t>* getright()
     {
         return right;
     }
};
#endif // btreenode_h
