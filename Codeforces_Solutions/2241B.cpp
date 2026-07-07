#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int x; cin>> x;
    int size = 0;
    while(x != 0){
        x /= 10; size++;
    }
    cout<<"1";
    for(int i = 1; i < size; i++) cout<<"0";
    cout<<"1\n";
}

int main(){
    int tt ; cin>>tt;
    while(tt--){
        solve();
    }

}