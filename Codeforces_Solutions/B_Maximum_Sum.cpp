#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
void solve() {
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;
    sort(all(a));
    vector<ll> pref(n + 1);
    for (int i = 0; i < n; i++)
        pref[i + 1] = pref[i] + a[i];
    ll ans = 0;
    for (int x = 0; x <= k; x++) {
        ll remsmall = pref[2 * x];
        int lstart = n - (k - x);
        ll remlarge = pref[n] - pref[lstart];
        ll rem = pref[n] - remsmall - remlarge;
        ans = max(ans, rem);
    }
    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}