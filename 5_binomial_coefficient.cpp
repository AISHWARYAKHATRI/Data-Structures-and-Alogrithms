#include<bits/stdc++.h>
using namespace std;

int binomialCoeff(int n, int r){
    if(r > n){
        return 0;
    }
    if((n-r)<r) r = n-r;
    int mod = 1000000007;
    int dp[r+1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for(int i=1; i<=n; i++){
        for(int j=min(i, r); j>0; j--){
            dp[j] = (dp[j] + dp[j-1])%mod;
        }
    }
    return dp[r];
}

int main(){
    int n, r;
    cin >> n >> r;
    cout << binomialCoeff(n, r);
return 0;
}
#include<iostream>
