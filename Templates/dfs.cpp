#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<int>> adj;
vector<bool> visited;

void dfs(int start){
    visited[start] = true;
    cout<<start<<" ";
    for(int v : adj[start]){
        if(!visited[v]){
            dfs(v);
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

    dfs(0);
    
}