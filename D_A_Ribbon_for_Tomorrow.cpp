#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 998244353;
const int MAXN = 200005;

ll fact[MAXN], inv_fact[MAXN];

ll pw(ll b, ll e, ll m) {
    ll r = 1; b %= m;
    while (e) { if (e & 1) r = r * b % m; b = b * b % m; e >>= 1; }
    return r;
}
void init() {
    fact[0] = 1;
    for (int i = 1; i < MAXN; i++) fact[i] = fact[i-1] * i % MOD;
    inv_fact[MAXN-1] = pw(fact[MAXN-1], MOD-2, MOD);
    for (int i = MAXN-1; i > 0; i--) inv_fact[i-1] = inv_fact[i] * i % MOD;
}
ll C(int n, int k) {
    if (k < 0 || k > n || n < 0) return 0;
    return fact[n] * inv_fact[k] % MOD * inv_fact[n-k] % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    init();

    int t; cin >> t;
    while (t--) {
        int n; string s;
        cin >> n >> s;

        int c0 = 0, c1 = 0, k0 = 0, k1 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') c0++; else c1++;
            if (i == 0 || s[i] != s[i-1]) {        // start of a new run
                if (s[i] == '0') k0++; else k1++;
            }
        }

        ll ans = 1;
        if (c0) ans = ans * C(c0 - 1, k0 - 1) % MOD;
        if (c1) ans = ans * C(c1 - 1, k1 - 1) % MOD;

        cout << ans << "\n";
    }
    return 0;
}