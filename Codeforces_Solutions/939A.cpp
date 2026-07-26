#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> f(n + 1);
    for (int i = 1; i <= n; i++) cin >> f[i];
    for (int i = 1; i <= n; i++) {
        if (f[f[f[i]]] == i) { cout << "YES\n"; return; }
    }
    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    // cin >> tt; 
    while (tt--) solve();
    return 0;
}