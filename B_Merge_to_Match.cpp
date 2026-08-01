#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    
    while(tt--){
        int n, m;
        cin>>n>>m;
        
        vector<int> a(n), b(m);
        
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;
        
        if (n < 2 * m) {
            cout<<"NO"<<endl;
            continue;
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool poss = true;
        int i = 0;
        
        for (int j = 0; j < m; j++) {
            while (i < n && a[i] < b[j]){
                i++;
            }
            int cntL = i;
            int l = j + 1;
            int u = n - m + j;
            if (cntL < l || cntL > u) {
                poss = false;
                break;
            }
        }
        
        cout<<(poss ? "YES" : "NO")<<endl;
    }
    return 0;
}