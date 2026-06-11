    #include <bits/stdc++.h>
    using namespace std;
    using ll = long long;
     
    int main() { 
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
     
        int tt;
        cin >> tt;
        while (tt--) {
            int n, k, q;
            cin >> n >> k >> q;
     
            vector<ll> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
     
            ll cnt = 0, ans = 0;
     
            for (int i = 0; i < n; i++) {
                if (a[i] <= q) {
                    cnt++;
                } else {
                    if (cnt >= k) {
                        ans += (cnt - k + 1) * (cnt - k + 2) / 2;
                    }
                    cnt = 0;
                }
            }
     
            if (cnt >= k) {
                ans += (cnt - k + 1) * (cnt - k + 2) / 2;
            }
     
            cout << ans << '\n';
        }
        return 0;
    }