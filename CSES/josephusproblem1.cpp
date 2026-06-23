#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin>>n;

    queue<int> q;
    for(int i = 1 ; i <= n; i ++){
        q.push(i);
    }
    vector<int> order;
    while((!q.empty())){
        int skip = q.front();
        q.pop();
        q.push(skip);

        int kill = q.front();
        q.pop();
        order.push_back(kill);
    }
    for(int i = 0 ; i < n ; i ++)
        cout<<order[i]<<" ";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
