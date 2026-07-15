#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin >> n;
    vector<vector<ll>> a(n, vector<ll>(3));
    for (int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }
    vector<vector<ll>> dp(n, vector<ll>(3));
    dp[0][0] = a[0][0];dp[0][1] = a[0][1];dp[0][2] = a[0][2];
    
    for (int i = 1; i < n; i++) {
        dp[i][0] = a[i][0] + max(dp[i-1][1], dp[i-1][2]);
        dp[i][1] = a[i][1] + max(dp[i-1][0], dp[i-1][2]);
        dp[i][2] = a[i][2] + max(dp[i-1][0], dp[i-1][1]);
    }
    cout << max({dp[n-1][0], dp[n-1][1], dp[n-1][2]}) << "\n";
    return 0;
}