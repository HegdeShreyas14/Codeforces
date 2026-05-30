#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int tt; cin>>tt;
    while(tt--){
        int n,p = 1; cin>>n;
        while(p * 2 < n)
            p *= 2;

        for(int i = p-1 ; i >= 0; i--)
            cout<<i<<" ";

        for(int i = p ; i < n; i++)
            cout<<i<<" ";

        cout<<"\n";
    }
    return 0;
}
