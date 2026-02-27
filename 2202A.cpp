#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main() {
    ll tt;
    cin >> tt;
    while(tt--) {
        ll x, y;
        cin >>x>>y;

        if (x - 2*y < 0 || (x - 2*y) % 3 != 0) {
            cout << "NO"<<endl;
            continue;
        }

        ll d = (x - 2*y) / 3;
        ll ne = 2 * max(0LL, -y);

        if (d >= ne)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
}
    
