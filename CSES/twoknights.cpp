#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n; cin>>n;ll c = 0 , diff = 1;
    cout<<"0"<<endl;
    for(ll i = 2; i<= n; i++){
        ll num = (i * i) * ((i * i) - 1)/2;
        cout<<( num - 8 * c) << endl;
        c += diff;
        diff++;
    }
    return 0;
}
