#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        ll s,k,m;
        cin>>s>>k>>m;
        ll time = 0, rem = s;
        while(time <= m){
        if(s > k){
            rem=k;
            time += k;
        }
        if(s<k)
        if(time+k>m) break; // incomplete
    }
}