#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<ll> a(n),b(n);
        for(auto &i : a)
         cin>>i;
        for(auto &j : b)
         cin>>j;

        vector<ll> la(2*n+1,0);
        vector<ll> lb(2*n+1,0);
        ll count=1;
        for(int i=1;i<n;i++){
            if( a[i] == a[i-1])
             count++;
            else 
            {
                la[a[i-1]] = max(la[a[i-1]],count);
                count=1;
            }
        }
        la[a[n-1]] = max(la[a[n-1]],count);
        count = 1;


        for(int i=1;i<n;i++){
            if( b[i] == b[i-1])
             count++;
            else 
            {
                lb[b[i-1]] = max(lb[b[i-1]],count);
                count=1;
            }
        }
        lb[b[n-1]] = max(lb[b[n-1]],count);
        
        ll maxfreq = -1;

        for(int i =1; i <=2*n; i++)
          maxfreq = max(maxfreq, la[i]+lb[i]);

        cout<<maxfreq<<endl;
        }
    return 0;
}