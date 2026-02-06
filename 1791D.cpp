#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
        ll n; cin>>n;
        string s;cin>>s;
        unordered_set<char> st;
        vector<ll> p(n+1,0);vector<ll> sp(n+1,0);

        for(ll i =1;i <= n;i++){
            st.insert(s[i-1]);
            p[i]=st.size();
        }
        st.clear();
        for(ll i=n;i >= 1;i--){
            st.insert(s[i-1]);
            sp[i]=st.size();
        }
        ll ans=0;
        for(ll i=0; i<n ; i++)
          ans = max(ans,p[i]+sp[i]);
        cout<<ans<<endl;
    }
    return 0;
}