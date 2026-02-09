#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll ceil_div(ll a, ll b) {
	return (a + b - 1) / b;
}

int main() {
	int t;
	cin>>t;
	while (t--) {
		ll x, y, k;
		cin>>x>>y>>k;
		ll sg = x - 1;
		ll stick = k * y + k - 1;

		ll tr = 0;
		tr += ceil_div(stick, sg);
		tr += k;
		cout<<tr<<endl;
	}
    return 0;
}
