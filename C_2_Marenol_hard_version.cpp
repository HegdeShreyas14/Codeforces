#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a, b;
        cin>>a>>b;
        vector<int> a1, a2, b1, b2;
        
        for(int i=0; i<n; i++){
            if(a[i] == '1' && i%2 ==0){
                a1.push_back(i);
            } else if(a[i] == '1' && i%2 != 0){
                a2.push_back(i);
            }
            
            if(b[i] == '1' && i%2 ==0){
                b1.push_back(i);
            } else if(b[i] == '1' && i%2 != 0){
                b2.push_back(i);
            }
        }
        
        if(a1.size() != b1.size() || a2.size() != b2.size()){
            cout<<-1<<endl;
            continue;
        }
        
        long long ans = 0;
        for(int i=0; i<a1.size(); i++){
            ans += abs(a1[i] - b1[i]);
        }
        
        for(int i=0; i<a2.size(); i++){
            ans += abs(a2[i] - b2[i]);
        }
        cout<<ans/2<<endl;
    }
    return 0;
}