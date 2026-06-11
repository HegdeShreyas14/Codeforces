
#include <bits/stdc++.h>
using namespace std;
int Oddy(int x) {
    while (x % 2 == 0) {
        x /= 2;
    }
    return x;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        bool flag = true;
        for (int i = 1; i <= n; i++) {
            if (Oddy(i) != Oddy(a[i])) {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES \n" : "NO \n");
    }
    return 0;
}
