//Dynamic Programming Approach but with optimized space complexity

#include<bits/stdc++.h>
using namespace std;

int main(){
   int val[] =  { 60, 100, 120 };
   int wt[] =  { 10, 20, 30 };
   int w=50, n=sizeof(val)/sizeof(val[0]);
   int dp[w+1];
   memset(dp, 0, sizeof(dp));
   for(int i=1;i<n+1;i++){
       for(int j=w;j>0;j--){
           if(wt[i-1]<=w) dp[j]=max(val[i-1]+dp[j-wt[i-1]], dp[j]);
       }
   }
   cout << dp[w];
   
   return 0;
}