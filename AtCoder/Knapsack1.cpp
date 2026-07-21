#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve(){
    int n , W; cin>>n>>W;
    vector<int> w(n + 1);
    vector<int> v(n + 1);
    for(int i = 1 ; i <= n; i ++) cin>>w[i]>>v[i];

    vector<vector<ll>> dp(n + 1 , vector<ll> (W + 1 , 0));  

    for(int i = 1; i <= n; i ++){
        for(int j = 0 ; j  <= W; j ++){
            dp[i][j] = dp[i-1][j];
            if( w[i] <= j){
                dp[i][j] = max(dp[i][j] , dp[i - 1][j - w[i]] + v[i]);
            }
        }
    }
    cout<<dp[n][W]<<" ";
}

int main(){
    int tt = 1;
    //cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}