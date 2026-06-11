#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool isprime ( int n ){

    for( int j = 2; j<= sqrt(n); j++){
        if(n %j == 0)
         return false;
    }
    return true;
}
int main(){

    int tt;
    cin>>tt;
    while(tt--){
        ll  n;ll prod = 1;
        cin>>n;
        for(ll i = 2; i < n; i++){
            if(isprime(i) && n % i == 0){
                prod *= i;
            }
        }
        cout<<prod<<endl;
    }
    return 0;
}