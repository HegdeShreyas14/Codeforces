#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll x;
    if (!(cin >> n >> x)) return 0;

    vector<pair<ll, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    int left = 0;
    int right = n - 1;

    while (left < right) {
        ll curr = a[left].first + a[right].first;

        if (curr == x) {
            cout << a[right].second << " " << a[left].second << "\n";
            return 0;
        } else if (curr < x) {
            left++;
        } else {
            right--;
        }
    }

    cout << "IMPOSSIBLE\n";

    return 0;
}