#include<bits/stdc++.h>
using namespace std;
using ll = long long; 

vector<vector<int>> adj;
vector<bool> visited;

void bfs(int start){
    vector<bool> vis(adj.size() , false);
    queue<int> q;
    q.push(start);
    vis[start] = true;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        cout<< u <<" ";
        for(int v : adj[u]){
            if(!vis[v]){
                vis[v] = true;
                q.push(v);
            }
        }
    }
}


int main(){
    int n , m;
    cin>>n>>m; // n nodes and m edges

    adj.assign(n , {});
    visited.assign( n ,false);
    for(int i = 0; i < m; i++){
        int  u , v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 0 ; i < n ; i ++){
        if(!visited[i]) bfs(i);
    }
        
}