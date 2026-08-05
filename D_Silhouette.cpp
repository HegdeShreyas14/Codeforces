#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vector<int> b;
    for(int i  =0;i < n;i ++) cin>>b[i];
    sort(b.begin() , b.end());
    int count0 = 0;
    while(b[count0] == 0) count0++;
    for(int i = count0 ;i < n;i++){
        
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}