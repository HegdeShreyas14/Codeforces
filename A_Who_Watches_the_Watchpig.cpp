#include <bits/stdc++.h>
using namespace std;
void solve() {
    int  n , k;
    int ans = 0;
    cin>>n>>k;
    string s; cin>>s;
    if(n < 2*k){
        cout<<"-1\n";
    }
    else {
        for(int  i = 0;i < k; i ++)
            if(s[i] != 'R') ans++;
        
        for(int i = n -1; i >= (n - k) ; i --)
            if(s[i] != 'L') ans++;

        cout<<ans<<"\n";
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
