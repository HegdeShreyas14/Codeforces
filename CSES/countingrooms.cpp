#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<char>> grid(n,vector<char>(m));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>grid[i][j];
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(grid[i][j] == '.' && i!=0 && j!=0 && i!=n-1 && j!=m-1){
                if(grid[i-1][j] == '#' || grid[i+1][j] == '#' || grid[i][j-1] == '#' || grid[i][j+1] == '#'){

                }
            }
        }
    }

}
