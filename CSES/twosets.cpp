#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll n;
    cin >> n;
    ll sum = 1LL * n * (n + 1) / 2;
    if(sum & 1){
        cout << "NO"<<endl;
        return 0;
    }
    cout << "YES"<<endl;

    ll target = sum / 2;
    vector<ll> a, b;
    for(ll i = n; i >= 1; i--){
        if(target >= i){
            a.push_back(i);
            target -= i;
        }
        else{
            b.push_back(i);
        }
    }
    cout << a.size() <<endl;
    for(ll x : a) cout << x << ' ';
    cout <<endl;
    cout << b.size() <<endl;
    for(ll x : b) cout << x << ' ';
    cout <<endl;
}
