#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int maxi=max({a,b,c});
    int mini=min({a,b,c});
    int second=a+b+c-maxi-mini;
    if(mini==maxi)
        cout<<'0'<<endl;
    else if(mini+second<maxi)
        cout<<second<<"\n";
   else
        cout<<maxi-mini<<"\n";
    
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}