#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isfair(ll n){
    ll num = n;
    while(num != 0){
       int d= num%10;
       if(d != 0 && n%d != 0)
        return false;
       num /= 10;
    }
    return true;
}
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{ 
        ll n;
        cin>>n;
        while(!isfair(n)){
            n += 1;
        }
        cout<<n<<endl;
    }
    return 0;
}