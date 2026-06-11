#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int tt; cin>>tt;
    while(tt--){
        int n; cin>>n;
        vector<ll> a(n);
        map<ll,int> count;
        for(auto &i : a)
            cin >> i;
        bool flag = true;
        for(int i = 0; i < n; i++)
            count[a[i]]++;
        for(auto &p : count){
            if(p.second == 1)
                flag = false;
        }
        if(flag == false){
            cout << "-1" << endl;
            continue;
        }
        vector<ll> stud(n);
        for(int i = 0; i < n; i++)
            stud[i] = i + 1;
        ll l = 0, r = 0;
        while(r < n){
            if(a[l] == a[r])
                r++;
            else{
                rotate(stud.begin() + l,stud.begin() + l + 1,stud.begin() + r);
                l = r;
            }
        }
        rotate(stud.begin() + l,stud.begin() + l + 1,stud.begin() + r);
        for(auto &i : stud)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
