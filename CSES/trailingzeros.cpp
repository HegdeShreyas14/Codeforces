#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll ans = 0;
    while (n >= 5) {
        ans += n / 5;
        n /= 5;
    }
    cout << ans <<endl;
    return 0;
}
