#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long ans = 0;
        for(long long b = 1; b <= n; b++){
            long long q = n / b;
            ans += q * q;
        }
        cout << ans << "\n";
    }
    return 0;
}