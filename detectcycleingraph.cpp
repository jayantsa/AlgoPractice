#include<iostream>
#include<vector>
#include<utility>
#include<queue>
using namespace std;
bool dfsCycle(int s,vector<bool> &visited,vector<bool> &recStack,vector<vector<int>> & graph)
{
   if(!visited[s])
   {
       visited[s]=true;
       recStack[s]=true;
       for(int i=0;i<graph[s].size();i++)
       {
           if(recStack[i]==true)
            return true;
           else if(!visited[i]&&dfsCycle(i,visited,recStack,graph))
            return true;
       }
   }
   recStack[s]=false;
   return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> graph(n+1);
        vector<bool> visited(n+1,false);
        vector<bool> recstack(n+1,false);
        for(int i=1;i<=m;i++)
        {
            int v1,v2;
            cin>>v1>>v2;
            graph[v1].push_back(v2);
            //graph[v2].push_back(v1);
        }
        int number_of_cycles=0;
        for(int i=1;i<=n;i++)
        {

            if(!visited[i])
            {
                if(dfsCycle(i,visited,recstack,graph))
                    number_of_cycles++;
            }
        }
        cout<<number_of_cycles<<"\n";
    }

    return 0;
}

