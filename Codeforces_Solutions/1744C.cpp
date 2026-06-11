#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int tt;
    cin>>tt;
    while(tt--){
        ll n; char c;
        cin>>n>>c;
        string str;
        cin>>str;
        string str2 = str+str;
        ll leng = str.length();ll p1=0 , p2=0;
        ll gg;
        ll maxi=0;
        if( c == 'g'){
         cout<<"0"<<endl;
         continue;
        }
        while(p1 < leng){
            if(str2[p1] != c){
                p1++;
                continue;
            }
            p2 = p1+1;
            while(str2[p2] != 'g'){
                p2++;
            }
            gg = p2-p1;
            p1=p2+1;
            maxi = max(gg,maxi);
        }
        cout<<maxi<<endl;
    }
    return 0;
}