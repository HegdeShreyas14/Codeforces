#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
   string s;
   int r[8]={0},c[8]={0};
   for(int i=0;i<8;i++){
    cin>>s;
    
     for(int j=0;j<8;j++){
        if(s[j]=='W')
         {
            r[i]=1;
            c[j]=1;
         }
      }
   }
   int ans = 16 - count(r,r+8,1) - count(c,c+8,1);
   if(ans == 16)
    ans=8;
   cout<<ans<<endl;
   return 0;
   }