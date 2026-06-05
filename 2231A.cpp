#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int solve(){
    int n; cin >> n;
    int o = 1, e = 2;
    for (int i = 0; i < n; i++){
        if (i % 2){
            cout << e + (n % 2 ? n - 1 : n) << ' ';
            e += 2;
        }
        else{
            cout << o << " ";
            o += 2;
        }
    }
    cout<<endl;
    return 0;
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}
