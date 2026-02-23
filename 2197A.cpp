#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int sumx(int x){
    int d,sum = 0;
    while(x != 0){
        d = x%10;
        sum += d;
        x /= 10;
    }
    return sum;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){

        int x;
        cin>>x;
        int count = 0;
        for(int y = x; y <= (x+90); y++){
            if( (y - sumx(y)) == x)
             count ++;
        }

        cout<<count<<endl;
    }
    return 0;
}