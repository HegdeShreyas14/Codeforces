#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        string st = "";
        bool isOne = true;
        if(k > n-2){
            cout<<"-1"<<"\n";
            continue;
        }
        int numOnes = ((k)/2) + 1;
        int numZeroes = ((k+1)/2) + 1;
        for(int i=0;i<numOnes;i++){
            st += "1";
        }
        for(int i=0;i<numZeroes;i++){
            st += "0";
        }
        for(int i=0;i<(n-numOnes-numZeroes);i++){
            if(isOne){
                st += "1";
            }else{
                st += "0";
            }
            isOne = !isOne;
        }
        cout<<st<<"\n";
    }
}