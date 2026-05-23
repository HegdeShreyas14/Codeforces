#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> coins(n);
    for(auto &i:coins) cin>>i;
    int count = 0, mod = 1e9+7;
    vector<int> dp(x+1,0); // need all the values ranging from 0 to x , hence size is x+1
    dp[0] = 1;
    for(int c : coins){
    for(int i = c ; i <= x ;i++){
        dp[i] = (dp[i] + dp[i-c])%mod;
        }
    }
    cout<<dp[x]<<endl;
    return 0;
}
