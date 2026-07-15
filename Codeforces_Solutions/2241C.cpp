#include<bits/stdc++.h>
using namespace std;
 using ll = long long;
int main(){
 
    int tt;
    cin >> tt;
 
    while(tt--){
        int n;
        string s;
        cin >> n >> s; 
        int count = 0;
        for(int i = 0; i < n - 1; i++) if(s[i] != s[i + 1]) count++; 
        cout << (count == 1 ? 2 : 1) << '\n';
    } 
    return 0;
}