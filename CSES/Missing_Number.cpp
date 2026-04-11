#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n; 
    cin>>n;
    vector<ll> a(n-1);
    for( auto &i : a) cin>>i;
    sort(a.begin(),a.end());
    ll i;
    for( i = 0; a[i] == (i+1); i++);
    cout<<i+1;
    
    
    return 0;
}