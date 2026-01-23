#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		string s;
		cin >> s; 
		int n = s.size(); 
		int zero= 0, one= 0; 
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '0')
				zero++;
			else
				one++;
		}

		int tlen = 0; 
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '0' && one > 0)
			{
				one--;
				tlen++; 
			}
			else if (s[i] == '1' && zero > 0)
			{
				zero--; 
				tlen++; 
			}
			else
				break; 
		}
		cout << n - tlen << endl;
	}
	return 0;
}