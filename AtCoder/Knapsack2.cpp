#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n , W; cin>>n>>W;
    vector<int> w(n + 1);
    vector<int> v(n + 1);
    ll maxval = 0;
    for(int i = 1 ; i <= n; i ++){
         cin>>w[i]>>v[i];
         maxval += v[i];
    }
    vector<vector<ll>> dp(n + 1 , vector<ll> ( maxval + 1 , 1e9));
    dp[0][0] = 0;

    for(int i = 0 ; i <= n; i ++){
        for(int j = 0; j <= maxval ; j ++){
            dp[i][j] = dp[i-1][j];
            if(v[i] <= j) dp[i][j] = min(dp[i][j] , dp[i-1][j - v[i]] + w[i]);
        }
    }
    ll ans = 0;
    for(int j = 0 ; j <= maxval; j ++)
        if(dp[n][j] <= W) ans = j;
    cout<<ans<<"\n";
}
int main(){
    int tt = 1;
    //cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}