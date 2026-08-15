#include<bits/stdc++.h>
using namespace std;

int solve(string& s, int bin){
    int ways = 0;
    
    for(int i=0; i<=1; i++){
        bool flag = true;
        int a = i;
        
        for(int j=bin; j<s.size(); j+= 2){
            if(s[j] != '?' && s[j] - '0' != a){
                flag = false;
            } 
            a = !a;
        }
        if(flag){
            ways++;
        }
    }
    return ways;
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int eve = solve(s, 0);
        int ood = solve(s, 1);
        
        cout<<eve*ood<<endl;
    }
    return 0;
}