#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;

		ll ansa = 1;
		ll ansb = n - 1;

		for (ll fac = 2; fac * fac <= n; fac++)
		{
			if (n % fac == 0)
			{
				ansa = n / fac;
				ansb = n - ansa;
				break;
			}
		}
		cout << ansa << " " << ansb << endl;
	}
	return 0;
}

