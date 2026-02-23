#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

int main(){
    ll tt;
    cin>>tt;
    while(tt--){
        ll n,r,b;
        cin>>n>>r>>b;
        string s = "";
		int lr = r / (b + 1);
		int er = r % (b + 1);
		for (int t = 1; t <= b + 1; t++)
		{
			for (int i = 0; i < lr; i++)
				s += 'R';
			if (er> 0)
			{
				s += 'R';
				er--;
			}
			if (t != b + 1)
				s += 'B';
		}
		cout << s << endl;
	}
	return 0;
}
