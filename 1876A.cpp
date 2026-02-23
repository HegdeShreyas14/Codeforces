#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ll tt;
	cin >> tt;
	while (tt--)
	{
		ll n, p;
		cin>>n>>p; 
		vector<pair<ll, ll>> v(n);  
		vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n; i++)
			cin >> b[i];
		for (int i = 0; i < n; i++)
			v[i] = {b[i], a[i]};
		sort(v.begin(), v.end());

		ll mini = p;
		ll als = 1;
		for (auto it : v)
		{
			ll canshare = it.second;
			ll sharecost = it.first;
			if (sharecost >= p)
				break;
			if (als + canshare > n)
			{
				mini += (n - als) * sharecost;
     				als = n;
    				break;
			}
			else
			{
				mini+= canshare * sharecost; 
				als += canshare;
			}
		}
		mini += (n - als) * p;
		cout <<mini<<endl;
	}
	return 0;
}
