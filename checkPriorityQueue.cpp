#include<iostream>
#include<vector>
#include<queue>
#include<stdlib.h>
using namespace std;
struct compare
{
    bool operator()(int i,int j)
    {return i>j?1:0;}
};
int main()
{
    priority_queue<int,vector<int>,compare>minheap;
    int k=3;
    vector<int> x={1, 23, 12, 9, 30, 2, 50};
    for(int i=0;i<k;i++)
    {
        minheap.push(x[i]);
    }
    for(int i=k;i<x.size();i++)
    {
        int z=minheap.top();
        if(z<x[i])
        {
            minheap.pop();
            minheap.push(x[i]);
        }
    }
    while(!minheap.empty())
    {
        cout<<minheap.top()<<" ";
        minheap.pop();
    }
return 0;
}
