#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n ,x;
    cin>>n>>x;
    vector<int> p(n);
    for(int &i : p) cin>>i;
    sort(p.begin() , p.end());
    int i = 0 , j = (n-1);
    int count = 0;
    while(i <= j){
        if((x-p[i]) >= p[j]){
            count++; j--; i++;
        }
        else{
            j--;count++;
        }
    }
    cout<<count<<endl;
}
