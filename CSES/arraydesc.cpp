#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    const int MOD = 1e9 + 7;
    vector<int> a(n);
    for(auto& i : a) cin >> i;

    vector<vector<int>> dp(n + 1, vector<int>(m + 2, 0));

    if(a[0] == 0){
        for(int j = 1; j <= m; j++){
            dp[1][j] = 1;
        }
    } else {
        dp[1][a[0]] = 1;
    }

    for(int i = 2; i <= n; i++){
        int curr = a[i - 1]; 

        if(curr == 0){
            for(int j = 1; j <= m; j++){
                dp[i][j] = ((1LL * dp[i - 1][j - 1] + dp[i - 1][j] + dp[i - 1][j + 1]) % MOD);
            }
        } else {
            int j = curr;
            dp[i][j] = ((1LL * dp[i - 1][j - 1] + dp[i - 1][j] + dp[i - 1][j + 1]) % MOD);
        }
    }

    int ans = 0;
    for(int j = 1; j <= m; j++){
        ans = (ans + dp[n][j]) % MOD;
    }

    cout << ans << "\n";

    return 0;
}