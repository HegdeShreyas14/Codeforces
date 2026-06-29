#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;
int n;
vector<vector<int>> adj;
ll eguild;

int dfs(int u, int p, int d) {
    int max1 = d; 
    int max2 = d;
    for (int v : adj[u]) {
        if (v != p) {
            int maxch = dfs(v, u, d + 1);
            if (maxch > max1) {
                max2 = max1;
                max1 = maxch;
            } else if (maxch > max2) {
                max2 = maxch;
            }
        }
    }
    if (max2 > d) {
        eguild += (max2 - d);
    }
    return max1;
}

void solve() {
    cin >> n;
    adj.assign(n + 1, vector<int>());
    eguild = 0;
    for (int i = 2; i <= n; ++i) {
        int p;
        cin >> p;
        adj[p].push_back(i);
        adj[i].push_back(p);
    }
    dfs(1, -1, 0);
    cout << n + eguild << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while (tt--) {
        solve();
    }
    return 0;
}