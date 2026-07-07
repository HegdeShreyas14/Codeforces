#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve (){
    int x , y;cin>>x>>y;

    if(x == y || x%y == 0){
        cout<<"YES\n";
    }
    else 
     cout<<"NO\n";
}
int main(){
    int tt; cin>>tt;
    while(tt--){
        solve();
    }
}