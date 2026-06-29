#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n , k ; cin>>n>>k;

    ll ans = 0;
    for(int i = 0 ; i < 30 ; i ++){
        ll cost = 1 << i;
        ll maxi = n / cost;
        ll buy =  min(k , maxi);

        n -= buy * cost;
        ans +=  buy;
    }
    cout<<ans<<"\n";
}

int main(){
    int tt; cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}