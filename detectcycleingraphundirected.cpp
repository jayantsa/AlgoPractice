#include<iostream>
#include<vector>
using namespace std;
bool detectCycle(int s,int parent,vector<bool>&visited,int n,vector<vector<int>>&graph)
{
   visited[s]=true;
   for(int i=0;i<graph[s].size();i++)
   {
       if(!visited[graph[s][i]])
       {
           if(detectCycle(graph[s][i],s,visited,n,graph))
            return true;
       }
       else if(graph[s][i]!=parent)
        return true;
   }
   return false;
}
int main()
{
    int t;//number of test cases
    cin>>t;
    while(t--)
    {
        int n,m;//n=number of vertices ,m=number of edges
        cin>>n>>m;
        vector<vector<int>> graph(n+1);
        for(int i=1;i<=m;i++)
        {
            int v1,v2;//vertices at the end of edge i
            cin>>v1>>v2;
            graph[v1].push_back(v2);
            graph[v2].push_back(v1);
            //cout<<"i:"<<i<<"\n";
        }
        int s;//source node
        int ncycle=0;//number of cycles in graph;
        //cin>>s;
        vector<bool> visited(n+1,false);
        for(int i=1;i<=n;i++)
        {
            if(!visited[i])
            {
                if(detectCycle(i,-1,visited,n,graph))
                   {
                     ncycle++;
                   }

            }
        }

        cout<<ncycle<<"\n";
    }

}
