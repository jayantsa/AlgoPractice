#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool graph[1001][1001];
bool visited[1001];
int dist[1001];
int n, m;
void bfs(int s)
{
    memset(dist, -1, sizeof dist);//to initialize array....
    for(int i = 0; i < n; ++i) visited[i] = false;
    queue<int> q;
    q.push(s);
    dist[s] = 0;
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int i = 0; i < n; ++i){
            if(graph[u][i]){
                if(!visited[i]){
                    visited[i] = true;
                    dist[i] = dist[u]+6;
                    q.push(i);
                }
            }
        }
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 0; i < n; ++i) for(int j = 0; j < n; ++j) graph[i][j] = false;
        int u,v;
        for(int i = 0; i < m; ++i){
            cin >> u >> v;
            u--; v--;
            graph[u][v] = graph[v][u] = true;
        }
        int s;
        cin >> s;
        s--;
        bfs(s);
        for(int i = 0; i < n; ++i){
            if(i != s) cout << dist[i] << " ";
        }
        cout << endl;

    }
    return 0;
}
