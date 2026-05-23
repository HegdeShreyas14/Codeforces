#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for( auto &i:a) cin>>i;
    vector<int> dp(x+1,10000000);
    dp[0] = 0;
    for(int i = 0 ; i <= x; i++){
        for(auto &j:a){
            if( i-j >=0)
                dp[i] = min(dp[i],dp[i-j]+1);
        }
    }
    if(dp[x] == 10000000) cout<<-1;
    else cout<<dp[x];
    return 0;
}
