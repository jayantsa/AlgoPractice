#ifndef gtreenode_h
#define gtreenode_h
#include<iostream>
using namespace std;
template<typename t>
class treenode{
    t data;
    treenode<t>*parent;
    int childcount;
    treenode<t>**child;//its an array of pointers.....child is a pointer to an array of pointers(child nodes)
public:
    treenode():data(0),parent(NULL),childcount(0),child(NULL){};
    treenode(t x):data(x),parent(NULL),childcount(0),child(NULL){};
    void setcount(int x)
    {
        childcount=x;
    }
    int getcount()
    {
        return childcount;
    }
    void setparent(treenode<t>* x)
    {
        parent=x;
    }
    treenode<t>* getparent()
    {
        return parent;
    }
    void setchildren(treenode<t>**ch)
    {
        child=ch;
    }
    treenode<t>**getchildren()
    {
        return child;
    }
    void setdata(t x)
    {
        data=x;
    }
    t getdata()
    {
        return data;
    }
};
#endif
