#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    const int MAX = 1000000;
    vector<bool> isPrime(MAX + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; (ll)i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = (i*i);j<=MAX;j += i)
                isPrime[j] = false;
        }
    }

    while (n--) {
        ll x;
        cin >> x;

        ll r = sqrtl(x);

        if (r * r == x && r <= MAX && isPrime[r])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
