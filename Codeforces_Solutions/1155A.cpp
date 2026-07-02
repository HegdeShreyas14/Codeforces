#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n ; cin>>n;
    string s; cin>>s;
    bool flag = false;
    for(int i = 0 ; i < n-1 ; i ++){

        if(s[i] > s[i + 1]){
            cout<<"YES\n";
            cout<<i+1<<" "<<i+2;
            flag = true;
            break;
        }
    }
    if(flag == 0)
     cout<<"NO\n";

}


int main(){    
    int tt = 1;
    // cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}