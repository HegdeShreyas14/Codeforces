#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll minops = INT_MAX;
    for (int i = 0; i < n; i++)
        minops = min(minops, abs(a[i]));
    
    cout << minops << endl;
    return 0;
}