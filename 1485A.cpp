#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--) {
        ll a, b;
        cin >> a >> b;
        ll ans = LLONG_MAX;
        for (int i = 0; i <= 30; i++) {
            ll bb = b + i;
            if (bb == 1) continue;
            ll x = a;
            ll ops = i;
            while (x > 0) {
                x /= bb;
                ops++;
            }
            ans = min(ans, ops);
        }
        cout << ans << '\n';
    }
    return 0;
}
