#include<bits/stdc++.h>
using namespace std;
using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
int main(){
    ll tt;
    cin>>tt;
    while(tt--){
       ll n;
       cin>> n;
       vector<ll> sec;
       ll lowest =INT_MAX;

       for(ll i =0;i<n;i++){
        ll m;
        cin>>m;
        vector<ll> a(m);
        for(auto &j:a)
         cin>>j;

        sort(a.begin() , a.end());
        sec.push_back(a[1]);
        lowest = min(lowest ,a[0]);
       }

       sort(sec.begin() , sec.end());
       ll sumsec = accumulate(sec.begin(),sec.end(),0LL);
       ll lowsecmin =sec[0];

       ll ans=sumsec+lowest-lowsecmin;
       cout<<ans<<endl; 
    }


    return 0;
}