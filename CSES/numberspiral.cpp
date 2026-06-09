#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int solve(){
    ll x,y;
    cin >> y >> x;

    ll i = max(x,y);
    ll ans;

    if(i & 1){
        if(x == i)
            ans = i*i - y + 1;
        else
            ans = (i-1)*(i-1) + x;
    }
    else{
        if(y == i)
            ans = i*i - x + 1;
        else
            ans = (i-1)*(i-1) + y;
    }

    cout << ans << '\n';
    return 0;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--) solve();
}
