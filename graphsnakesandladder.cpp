#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct queryentry
{
    int v;
    int dist;
};
int main()
{
    int n;
    cin>>n;
    vector<int> mov(n+1,-1);
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        mov[v1]=v2;
    }
    vector<bool>visited(n+1,false);
    queue<queryentry> q;
    queryentry s={1,0};
    visited[s.v]=true;
    q.push(s);
    queryentry qe;
    while(!q.empty())
    {
        qe=q.front();
        int v=qe.v;
        if(v==n)
            break;
        q.pop();
        for(int i=v+1;i<=v+6&&i<=n;i++)
        {
            if(!visited[i])
            {
                queryentry a;
                a.dist=qe.dist+1;
                visited[i]=true;
                if(mov[i]!=-1)
                {
                    a.v=mov[i];
                }
                else{
                    a.v=i;
                }
                q.push(a);
            }
        }
    }
    cout<<qe.dist<<"\n";
}
