#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int n = s.size(), rem13 = 0;

    for (char c : s) {
        if (c == '1' || c == '3') rem13++;
    }

    int tot2 = 0, mx = rem13;
    for (char c : s) {
        if (c == '2') tot2++;
        else if (c == '1' || c == '3') rem13--;
        mx = max(mx, tot2 + rem13);
    }
    cout << n - mx << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
