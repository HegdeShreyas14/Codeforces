#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,d;
    cin>>n>>d;
    vector<ll> a(n);
    for(auto &i : a)
     cin>>i;
    sort(a.begin(),a.end());
    ll l=-1,r=n-1,t=1,c=0;

    while(l < r){
        if(a[r]*(t) > d ){
         c++;r--;t=1;
        }
        else {
            l++;t++;
        }
    }
    cout<<c<<endl;

    return 0;
}