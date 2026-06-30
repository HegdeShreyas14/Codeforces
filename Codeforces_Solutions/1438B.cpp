#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n ; cin>>n;
    vector<ll> a(n);
    for(auto &i : a) cin>>i;

    unordered_set<ll> s;
    for(auto &i : a){
        s.insert(i);
    }
    if(s.size() < n) cout<<"YES\n";
    else cout<<"NO\n";
}


int main(){
    
    int tt ; cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}