#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll tt;
    cin>>tt;
    while(tt--){
        ll n,q;
        cin>>n>>q;
        vector<ll> a(n), b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        vector<pair<int,int>> vec(q);
        for(int i=0;i<q;i++){
            cin >> vec[i].first >> vec[i].second;
        }

     
        vector<int> temp;
        for(int i=0;i<n;i++){
            temp.push_back(max(a[i],b[i]));
        }

    
        for(int i=n-1; i>0; i--){
            if(temp[i-1] < temp[i])
                temp[i-1] = temp[i];
        }

       
        vector<int> pref(n + 1, 0); 
        
        
        for(int i = 0; i < n; i++){
            pref[i+1] = pref[i] + temp[i];
        }

       
        for(auto & it : vec){
            int l = it.first;
            int r = it.second;
            cout << pref[r] - pref[l-1] << " ";
        }

        cout<<"\n";
    }
}