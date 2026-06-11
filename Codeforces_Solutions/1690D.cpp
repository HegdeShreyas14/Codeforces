#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--){
        ll n, k;
        cin >> n >> k;
        string arr;
        cin >> arr;
        int pref[n];
        pref[0] = (arr[0] == 'W');
        for(int i = 1; i < n; i++){
            if(arr[i] == 'W')
                pref[i] = pref[i-1] + 1;
            else
                pref[i] = pref[i-1];
        }
        int mini = INT_MAX;
        mini = pref[k-1];

        int l = 1, r = k;
        while(r < n){
            int diff = pref[r] - pref[l-1];
            mini = min(mini, diff);
            l++;
            r++;
        }

        cout<<mini<<endl;
    }
    return 0;
}
   