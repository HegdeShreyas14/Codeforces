#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<long long> a(n), b(m);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];

    // 1. Since all elements are distinct, each element in 'b' requires
    // merging at least 2 elements from 'a'. Thus n >= 2*m.
    if (n < 2 * m) {
        cout << "NO\n";
        return;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // 2. Prefix / Suffix dominance check:
    // For any threshold k, count(b > k) <= count(a > k) and count(b < k) <= count(a < k)
    for (int i = 0; i < m; ++i) {
        // count of elements in b <= b[i] is (i + 1)
        // count of elements in a < b[i] must be at least (i + 1)
        int count_a_less = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
        if (count_a_less < i + 1) {
            cout << "NO\n";
            return;
        }

        // count of elements in b >= b[i] is (m - i)
        // count of elements in a > b[i] must be at least (m - i)
        int count_a_greater = a.end() - upper_bound(a.begin(), a.end(), b[i]);
        if (count_a_greater < m - i) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}