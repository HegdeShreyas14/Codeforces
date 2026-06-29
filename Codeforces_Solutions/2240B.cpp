#include<bits/stdc++.h>
using namespace std;
#define int long long
int M = 998244353;
 
int Power(int x, int y){
    int res = 1;
    while (y){
        if (y % 2){
            res *= x;
            res %= M;
        }
        x *= x;
        x %= M;
        y >>= 1;
    }
    return res;
}
void solve(){
    int n, m, r, c; cin >> n >> m >> r >> c;

    int freec = (r * c - 1) + (r - 1) * (m - c) + (c - 1) * (n - r);

    int ans = Power(2, freec);
    cout << ans << '\n';

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int t; cin >> t;
    while (t--) solve();
}