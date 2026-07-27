#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> w(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> w[i];

        if (n % 2) {
            cout << "NO\n";
            continue;
        }

        int mnOdd = INT_MAX;
        int mxEven = INT_MIN;

        for (int i = 1; i <= n; i++) {
            if (i & 1)
                mnOdd = min(mnOdd, w[i]);
            else
                mxEven = max(mxEven, w[i]);
        }

        if (mnOdd - mxEven > 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}