#include<bits/stdc++.h>
using namespace std;

int main(){
   int wt[] = {1, 1, 1};
   int val[] = {10, 20, 30};
   int w = 2;
   int n = sizeof(val)/sizeof(val[0]);
   
   int T[n+1][w+1];
   memset(T, -1, sizeof(T));
   
   for(int i=0; i<n+1; i++){
       for(int j=0; j<w+1; j++){
           if(i==0 || j==0) T[i][j] = 0;

           else if(wt[i-1]<= w)
               T[i][j] = max(val[i-1]+T[i-1][j-wt[i-1]], T[i-1][j]);

            else T[i][j] = T[i-1][j];
           } 
       }
   cout <<  T[n][w];
return 0;
}