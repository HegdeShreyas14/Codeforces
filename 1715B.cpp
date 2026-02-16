#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        if (s < b*k || s > b*k + (k-1)*n) {
            cout<<"-1"<<endl;
            continue;
        }
        vector<ll> arr(n,0);
        arr[n-1] = b*k;
        ll rem = s - b*k;
        for(int i = 0; i < n && rem > 0; i++){
            ll add = min(rem, k-1);
            arr[i] += add;
            rem -= add;
        }
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}
