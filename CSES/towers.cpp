#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin>>n;
    multiset<int> k;
    for(int i = 0; i < n; i++){
        int l;cin>>l;

        auto it = k.upper_bound(l);
        if(it == k.end())
           k.insert(l);
        else
        {
            k.erase(it);
            k.insert(l);
        }
    }
    cout<<k.size()<<endl;
    return 0;
}
