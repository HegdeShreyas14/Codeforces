#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        ll n;cin>>n;
        vector <ll> a(n);
        for( auto &i : a){
            cin>>i;
        }
        ll temp = 0;
        for( int i = 0;i < n;i++){
            if( a[i] == n){
             temp = a[i];
             a[i] = a[0];
             a[0] = temp;            
        }
    }
        for(int i = 0; i< n ; i++)
         cout<<a[i]<<" ";
        
        cout<<endl;    

    }
    return 0;
}