#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--){
        int n;ll c;
        cin>>n>>c;
        vector<ll> a(n), b(n);
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;
        const ll INF = LLONG_MAX;
        ll best = INF , cost = 0;;
        bool val = true;
        for(int i = 0; i < n; i++){
            if(a[i] < b[i]){ 
                val = false; 
                break;
                }
            cost += a[i] - b[i];
        }
        if(val) 
          best = min(best, cost);
        vector<ll> sa = a, sb = b;
        sort(sa.begin(), sa.end());
        sort(sb.begin(), sb.end());
        val = true;
        cost = c;
        for(int i = 0; i < n; i++){
            if(sa[i] < sb[i]){
                val = false; 
                break; 
                
            }
            cost += sa[i] - sb[i];
        }
        if(val) 
          best = min(best, cost);

        cout << (best == INF ? -1 : best) << "\n";
    }
    return 0;
}