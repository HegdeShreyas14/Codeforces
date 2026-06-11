#include<bits/stdc++.h>
using namespace std;
using ll =long long;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<ll> arr(n);
        for( auto &i :arr)
         cin>>i;
      
        int ans = 1;
        int base = arr[0];
        for(int i = 1; i < n; i++){
           if(arr[i] <= base || arr[i] > arr[i - 1] + 1){
              base = arr[i];
            ans++;
         }
    }
    cout << ans << endl;
    }
}