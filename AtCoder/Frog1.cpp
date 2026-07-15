#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin >> n;
    
    vector<ll> stones(n);
    for (ll &stone : stones) cin >> stone; 
    vector<ll> dp(n);
    dp[0] = 0; 
    if (n > 1) {
        dp[1] = abs(stones[1] - stones[0]);
    }
    for (int i = 2; i < n; i++) {
        dp[i] = min(dp[i-1] + abs(stones[i] - stones[i-1]), 
                    dp[i-2] + abs(stones[i] - stones[i-2]));
    }
    
    cout << dp[n-1] << "\n"; 
    return 0;
}