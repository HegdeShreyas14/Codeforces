#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string str;
        cin>>str;
        int n = str.length();
        bool encounteredOne = false;
        bool encounteredZero = false;
        string ans = "";
        for(int i=0;i<n;i++){
            if(str[i] == '1' && !encounteredOne){
                encounteredOne = true;
                continue;   
            }
            if(str[i] == '0' && !encounteredZero){
                encounteredZero = true;
                continue;   
            }   
            ans += str[i];
        }
        cout<<ans<<"\n";
    }
}