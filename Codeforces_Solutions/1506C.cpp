#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string a , b; cin>>a>>b;
    ll lena = a.length() ; ll lenb = b.length();

    ll comlong = 0;

    for(ll i = 1; i <= min(lena , lenb); i ++ ){
        for(ll j = 0 ; j + i <=lena ; j ++){
            for(ll k = 0; k + i <= lenb ; k ++){
                string substra = a.substr( j , i);
                string substrb = b.substr( k , i);

                if(substra == substrb){
                    comlong = max( comlong , i);
                }
            }
        }
    }
        ll ops = lena + lenb - 2 * comlong;
        cout<<ops<<"\n";

}
int main(){
    int tt ; cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}
