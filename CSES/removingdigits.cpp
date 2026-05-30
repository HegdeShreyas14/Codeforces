/* This is the greedy version of the solution */
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;cin>>n;
    int steps = 0;
    while( n > 0){
        int maxi = 0;
        int num = n;

        while(num > 0){
            maxi = max(maxi, num%10);
            num /= 10;
        }
        n -= maxi;
        steps++;
    }
    cout<<steps<<endl;

}

/* The DP version of the solution
 *
 *  int n; cin>>n;
 *  vector<int> dp(n+1, 1e9);
 *  dp[0] = 0;
 *
 * for(int i = 1; i<= n; i++){
 * int num = n;
 * while(num > 0){
 *  int digit = num%10;
 *  num /=10;
 *  if(digit != 0){
 *    dp[i] = min(dp[i], dp[i-d]+1);
 *    }
 *  }
 * }
 * cout<<dp[n]<<endl;
 */
