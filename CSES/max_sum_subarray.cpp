#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin >> n;
    vector<ll> x(n);
    for(int i = 0; i < n; i++) cin >> x[i];
    ll currsum = x[0];
    ll maxsum = x[0];

    for(int i = 1; i < n; i++){
        currsum = max(x[i], currsum + x[i]);
        maxsum = max(maxsum, currsum);
    }
    cout << maxsum << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt = 1;
    while(tt--){
        solve();
    }
    return 0;
}
