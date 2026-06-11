
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin>>tt;

    while (tt--) {
        long long n, a, b;cin>>n>>a>>b;
        long long cost3 = min(3 * a, b);
        long long ans =(n / 3) * cost3 + min((n % 3) * a, b);
        cout<<ans<<endl;
    }
}
