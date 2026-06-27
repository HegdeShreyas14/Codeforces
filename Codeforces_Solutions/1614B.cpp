#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		vector<ll> visits(n);
		for (ll i = 0; i < n; i++)
			cin >> visits[i];
		vector<pair<ll, ll>> builds;
		for (int i = 0; i < n; i++)
			builds.push_back({visits[i], i});
		sort(builds.rbegin(), builds.rend());
		vector<ll> ans(n + 1, 0);
		ans[0] = 0;

		ll mins = 0;
		ll cords = 1;
		for (int i = 0; i < n; i++)
		{
			ans[builds[i].second + 1] = cords;
			mins += (2 * abs(cords) * builds[i].first);
			if (cords < 0)
				cords = abs(cords) + 1;
			else
				cords = -cords;
		}
		cout << mins << endl;
		for (auto it : ans)
			cout << it << " ";
		cout << endl;
	}
}
