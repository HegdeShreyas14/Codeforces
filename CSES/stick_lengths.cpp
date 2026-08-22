#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;cin>>n;
    vector<int> p(n);
    for(int i = 0;i < n;i ++) cin>>p[i];
    sort(p.begin() , p.end());
    int median = p[n/2];
    ll tot = 0;
    for(int i = 0;i < n;i ++){
        tot += abs(median  - p[i]);
    }
    cout<<tot;
}

int main(){
    int tt = 1;
    while(tt--){
        solve();
    }
}
