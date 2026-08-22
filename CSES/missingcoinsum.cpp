#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin>>n;
    vector<int> coins(n);
    for(auto &coin : coins) cin>>coin;

    sort(coins.begin() , coins.end());
    ll targ = 1;
    for(int i = 0;i < n;i ++){
        if(coins[i] > targ){
            break;
        }
        targ += coins[i];
    }
    cout<<targ;
}


int main(){
    int tt = 1;
    while(tt--)
        solve();

    return 0;
}
