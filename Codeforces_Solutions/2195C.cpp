#include <bits/stdc++.h>
using namespace std;

bool invalid(int x, int y) {
    return (x == y || x + y == 7);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int count = 0;
        int i = 0;
        bool lastPairInvalid = false;

        while (i + 1 < n) {
            if (invalid(a[i], a[i + 1])) {
                count++;
                lastPairInvalid = true;
                i += 2;  
            } else {
                lastPairInvalid = false;
                i += 1;  
            }
        }
        if (n % 2 == 1) {

            if (!lastPairInvalid && n >= 2) {
                if (invalid(a[n - 2], a[n - 1])) {
                    count++;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}