#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
const int INF = 1e9;
const ll LINF = 1e18;
const ll MOD = 1e9 + 7;
void solve() {
    int n;
    cin >> n;
    map<int, int> t;
    for (int i = 0; i < n; i++) {
        int arr, dep;
        cin >> arr >> dep;
        t[arr]++;
        t[dep + 1]--;
    }
    int curr = 0;
    int max_cus = 0;
    for (auto &time : t) {
        curr += time.second;
        max_cus = max(max_cus, curr);
    }
    cout<< max_cus <<"\n";
}

// Alternative solution using vector pairs
// vector<pair<int,int> s(n);
// for(int i = 0 ; i < n; i ++){
//  int a , b; cin>>a>>b;
// s.emplace_back(a, +1);
// s.emplace_back(b, -1);
// } sort(s.begin() , s.end());
// int highest = 0 , count = 0;
// for(auto [t,d] : s) {
// count += d;
// highest = max(highest , count);
// }
// cout<<highest<<"\n";

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
