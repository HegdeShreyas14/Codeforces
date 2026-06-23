#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll solve(int idx, const vector<ll>& arr, ll s1, ll s2, int n) {
    if (idx == n) {
        return abs(s1 - s2);
    }
    ll ch = solve(idx + 1, arr, s1 + arr[idx], s2, n);
    ll nch = solve(idx + 1, arr, s1, s2 + arr[idx], n);
    return min(ch, nch);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if (!(cin >> n)) return 0;
    vector<ll> arr(n);
    for (auto &i : arr) {
        cin >> i;
    }
    ll ans = solve(0, arr, 0, 0, n);
    cout << ans << "\n";
    return 0;
}
