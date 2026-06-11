#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,m,k;cin>>n>>m>>k;
    vector<int> a(n),b(m);
    for(int &i : a) cin>>i;
    for(int &i : b) cin>>i;

    sort(a.begin() , a.end());
    sort(b.begin() , b.end());
    int i = 0,j = 0, count = 0;
    while( i < n && j < m){
        if(b[j] < (a[i] - k)){
            j++;
        }
        else if (b[j] > (a[i] + k)){
            i++;
        }
        else {
            count++;i++;j++;
        }
    }
    cout<<count<<endl;

}
