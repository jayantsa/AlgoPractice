#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void topological(int v,vector<bool>&visited,vector<vector<int>>& graph,stack<int> &s)
{
    visited[v]=true;
    for(int i=0;i<graph[v].size();i++)
    {
        if(!visited[graph[v][i]])
        {
            topological(graph[v][i],visited,graph,s);
        }
    }
    s.push(v);
}
int main()
{

    int n,m;
    cin>>n>>m;
    vector<vector<int>> graph(n+1);
    for(int i=0;i<m;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
    }
    stack<int> sta;
    vector<bool> visited(n+1,false);
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            topological(i,visited,graph,sta);
        }
    }
    while(!sta.empty())
    {
        cout<<sta.top()<<" ";
        sta.pop();
    }
    cout<<"\n";

}
