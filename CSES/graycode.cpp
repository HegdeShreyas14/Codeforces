// Using iterative mirroring as one of the solutions for the problem
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
    int n; cin>>n;
    vector<string> gray = {"0" , "1"};

    for(int i = 2 ; i <= n; i ++){
        int sz = gray.size();

        for(int j = sz -1 ; j >= 0 ; j --){
            gray.push_back(gray[j]);
        }
        for(int j = 0 ; j < sz ; j ++){
            gray[j] = "0" + gray[j];
            gray[sz + j] = "1" + gray[sz + j];
        }
    }
    for(const string &g :gray)
     cout<<g<<"\n";
    }


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t  = 1;
    while(t--){
        solve();
    }
    return 0;
}
