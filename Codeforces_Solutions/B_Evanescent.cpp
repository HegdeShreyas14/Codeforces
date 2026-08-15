#include <bits/stdc++.h>
using namespace std;

void solution(){
    vector<pair<char,int>> letters;
    int n;
    string s;
    cin>>n;
    cin>>s;
    for(char c : s){
        if(letters.empty() || letters.back().first != c)
            letters.push_back({c,1});
        else
            letters.back().second++;  
    }
    if(letters.size()==1){
            cout<<"1\n";
            return;
    }
    if(letters.size()==2){
            cout<<"2\n";
            return;
    }
    int min_count = INT_MAX;
    int idx;
    for(int i=1;i<letters.size()-1;i++){
        if(letters[i].second<min_count){
            min_count=letters[i].second;
            idx=i;
        }
    }
    if(min_count==1){
        if(letters.at(idx-1).first==letters.at(idx+1).first){
            cout<<letters.size()-2<<"\n";
        }else{
            cout<<letters.size()-1<<"\n";
        }
    }else{
            cout<<letters.size()<<"\n";
        }
    }
int main() {
    int t=1;
    cin >> t;
    while (t--) {
        solution();
    }

    return 0;
}