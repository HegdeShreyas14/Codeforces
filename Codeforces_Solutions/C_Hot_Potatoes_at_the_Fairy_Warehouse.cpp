#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int  n,k; cin>>n>>k;
    string s ; cin>>s;
    int len = s.length();

    vector<int> sc(2, 0);
    for(int i = 0;i < len;i ++){
        if(s[i] == '1'){
            if(s[(i + 1)%len] == '1'){
                sc[i%2]++;
            }else{
                sc[(i + 1)%2] ++;
            }
        }
    }
    cout<<sc[1]<<" "<<sc[0]<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}