#include<bits/stdc++.h>
using namespace std;
using ll =long long;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    ll tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int mid;
        if(n%2 == 0)
         mid=(n/2);
        else 
         mid= (n/2)+1;
        
        cout<<mid<<" "<<(mid+1);
        int c=2;
        int s=mid+1;
        for(int i=2;i<=n; i++){
            if(c == n){
                cout<<endl;
                continue;
            }
           if(c%2 == 0){
            cout<<" "<<(s - c);
            s =(s-c);
           }
           else {
            cout<<" "<<(s + c);
            s =s+c;
           }
           c++;
           
            
        }
    }
}