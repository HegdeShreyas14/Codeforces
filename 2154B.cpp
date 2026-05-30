#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int tt;
    cin >> tt;

    while(tt--) {

        int n;
        cin >> n;

        vector<ll> a(n);

        for(auto &i : a)
            cin >> i;

        ll maxi = a[0];
        for(int i = 1; i < n; i++) {
            if(i & 1)
                a[i] = max(a[i], maxi);

            maxi = max(maxi, a[i]);
        }

        ll ans = 0;

        // Check valleys (even positions)
        for(int i = 0; i < n; i += 2) {

            ll mini = LLONG_MAX;

            if(i - 1 >= 0)
                mini = min(mini, a[i-1]);

            if(i + 1 < n)
                mini= min(mini, a[i+1]);

            if(mini <= a[i])
                ans += a[i] - mini + 1;
        }

        cout << ans << endl;
    }

    return 0;
}