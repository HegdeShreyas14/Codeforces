#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int open = 0;
    int moves = 0;
    for (char c : s) {
        if (c == '(') {
            open++;
        } else {
            if (open > 0) {
                open--;
            } else {
                moves++;
            }
        }
    }

    cout << moves << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
