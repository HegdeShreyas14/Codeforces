#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int &i : a) cin>>i;
    sort(a.begin() , a.end());

    int ans = 1;
    for(int i = 1 ; i < n; i++){
        if(a[i] != a[i-1])
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
