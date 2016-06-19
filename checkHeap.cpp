#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> x={1,45,87,96,32};
    make_heap(x.begin(),x.end());
    for(int i=0;i<x.size();i++)
        cout<<x[i]<<" ";
    //pop_heap(x.begin(),x.end());
    x.push_back(100);
    cout<<"\n";
    for(int i=0;i<x.size();i++)
        cout<<x[i]<<" ";
    push_heap(x.begin(),x.end());
    cout<<"\n";
    for(int i=0;i<x.size();i++)
        cout<<x[i]<<" ";

    return 0;

}
