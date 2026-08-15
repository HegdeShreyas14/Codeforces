#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, x, a[100005];
        cin >> n >> x;
        int s = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) cin >> a[j];
            for (int j = 0; j < n; j++) {
                if ((x | a[j]) != x) break;
                s |= a[j];
            }
        }
        if (s == x) cout <<"YES\n";
        else cout <<"NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}