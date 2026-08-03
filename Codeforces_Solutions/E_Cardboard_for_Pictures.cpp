#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 lll;

lll isqrt(lll v) {
    if (v <= 0) return 0;
    lll x = (lll)sqrtl((long double)v);
    while (x > 0 && x * x > v) x--;
    while ((x + 1) * (x + 1) <= v) x++;
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--) {
        ll n, c;
        cin >> n >> c;
        lll S = 0, Q = 0;                  
        for (int i = 0; i < n; i++) {
            ll s;
            cin >> s;
            S += s;
            Q += (lll)s * s;
        }
        lll D = S * S + (lll)n * (c - Q);    
        ll w = (ll)((isqrt(D) - S) / (2 * (lll)n));
        cout << w << '\n';
    }
    return 0;
}