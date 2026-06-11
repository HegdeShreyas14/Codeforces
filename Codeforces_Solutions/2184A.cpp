#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll tt;
    cin>>tt;
    while(tt--){
        ll n;
        cin>>n;
        if( n == 2)
          cout<<"2"<<endl;
        else if(n==3)
          cout<<"3"<<endl;
        else {
            if(n%2==0)
              cout<<"0"<<endl;
            else
              cout<<"1"<<endl;
        }
    }
}