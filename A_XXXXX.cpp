#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n, x;
        cin>>n>>x;
        int sum = 0;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum += arr[i];
        }
        if(sum % x != 0){
            cout<<n<<"\n";
            continue;
        }
        int ans = -1;
        int l = 0;
        while(l < n && arr[l] % x == 0){
            l++;
        }
        if(l < n){
            ans = max(ans, n-l-1);
        }
        int r = n-1;
        while(r >= 0 && arr[r] % x == 0){
            r--;
        }
        if(r >= 0){
            ans = max(ans, r);
        }
        cout<<ans<<"\n";
    }
    return 0;
}