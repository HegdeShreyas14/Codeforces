#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

const int INF = 1e9;
const ll LINF = 1e18;
const ll MOD = 1e9 + 7;

bool is1100(const string &s, int idx) {
    if (idx < 0 || idx + 3 >= (int)s.length()) return false;
    return s[idx] == '1' && s[idx+1] == '1' && s[idx+2] == '0' && s[idx+3] == '0';
}

void solve() {
    string s; cin >> s;
    int n; cin >> n;
    int len = s.length();
    int cnt = 0;
    for (int i = 0; i + 3 < len; i++) {
        if (s[i] == '1' && s[i+1] == '1' && s[i+2] == '0' && s[i+3] == '0') {
            cnt++;
        }
    }

    while (n--) {
        int i, v; cin >> i >> v;
        i--;
        char new_char = (v == 1 ? '1' : '0');
        if (s[i] == new_char) {
            cout << (cnt > 0 ? "YES\n" : "NO\n");
            continue;
        }
        s[i] = (new_char == '1' ? '0' : '1');
        for (int j = i - 3; j <= i; j++) {
            if (is1100(s, j)) cnt--;
        }
        s[i] = new_char;
        for (int j = i - 3; j <= i; j++) {
            if (is1100(s, j)) cnt++;
        }

        cout << (cnt > 0 ? "YES\n" : "NO\n");
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
