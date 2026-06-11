#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main(){
    ll tt;
    cin>>tt;
    while(tt--){
        int n,h,l,count;
        cin>>n>>h>>l;
        int end=n-1;
        vector<ll> a(n);
        for(int f=0;f<n;f++)
         cin>>a[f];
        sort(a.begin(),a.end());
        while(a[end]>max(h,l))
            end--;
        for(int i=0;i<=end;i++)
            if(a[i] <= min(h,l))
                count++;
        int result = count > end/2 ? end/2 : count;
        cout<<result;
        }
    return 0;

}