#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin>>n;
    vector<pair<int,int>> movies(n);
    for(int i = 0; i < n ; i++){
        cin>>movies[i].second>>movies[i].first;
    }
    sort(movies.begin() , movies.end());
    int cnt = 0 , end_time = 0;

    for(int i = 0; i < n ; i++){
        if(movies[i].second >= end_time){
            cnt++;
            end_time = movies[i].first;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}
