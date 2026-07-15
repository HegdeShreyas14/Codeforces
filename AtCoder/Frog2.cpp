#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k; 
    cin >> n >> k;
    
    vector<ll> stones(n);
    for (ll &stone : stones) cin >> stone; 
    
    vector<ll> dp(n, INF); 
    dp[0] = 0; 
    
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= k; j++) {
            if (i - j >= 0) { 
                dp[i] = min(dp[i], dp[i - j] + abs(stones[i] - stones[i - j]));
            } else {
                break; 
            }
        }
    }
    
    cout << dp[n-1] << "\n"; 
    return 0;
}