#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int tt;cin>>tt;
    while(tt--){
        int n;cin>>n;
        string s;cin>>s;
        int cnt =0, prev = -1;
        if(s[0]=='0' && s[1] == '0') s[1] = '1';
        if(s[n-1] == '0' && s[n-2] == '0') s[n-2] = '1';
        for(int i=0;i<n;i++)
        {
            if(s[i] == '1')
              if( i - prev >= 3){
                cnt++;s[i] = '1' ; prev=i;
              }
              else{
                cnt++ ; prev = i;
              }
        }
        cout<<cnt<<endl;
    }
    return 0;
}