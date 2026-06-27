#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve(){
    int n; cin>> n; 
    vector<ll> a(n);
    for(int i = 0 ; i < n ; i++) cin>>a[i];
    ll ans = INT_MIN;
    int i = 0 , j = 0;
    ll sum = 0;

    while( j < n){
        if(sum < 0){
            sum = 0;
            i = j;
        }

        if(i < j ){
            if((a[i] ^ a[j]) & 1){
                sum += a[j];
            }else {
                sum = a[j];
                i = j;
            }
        }
        else {
                sum = a[j];
            }
            ans = max(ans , sum);
            j++;
        }
        cout<<ans<<"\n";

    }



int main(){
    int tt; cin>>tt;
    while(tt--){
        solve();
    }
}