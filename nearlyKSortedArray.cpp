#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct compare{
    bool operator()(int i,int j)
    {
        return i>j?1:0;
    }
};
int main()
{
    priority_queue<int,vector<int>,compare> minheap;
    vector<int>x={2, 6, 3, 12, 56, 8};
    vector<int>result;
    int k=2;
    for(int i=0;i<=k;i++)
    {
        minheap.push(x[i]);
    }

    for(int i=k+1;i<x.size();i++)
    {
        result.push_back(minheap.top());
        minheap.pop();
        minheap.push(x[i]);
    }
    while(!minheap.empty())
    {
        result.push_back(minheap.top());
        minheap.pop();
    }

    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }


}
