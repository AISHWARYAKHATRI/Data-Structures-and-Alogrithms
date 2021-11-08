// Dynamic based implementation. Re-computations of the same subproblems can be avoided by constructing a temporary 2D-array C[][] in a bottom-up manner. 
#include<iostream>
using namespace std;

void binomialCoeff(int n, int r){
    int C[n+1][r+1];
    for(int i=0; i<=n; i++){
        for(int j=0; j<=min(i, r); j++){

            if(j==0 || j==i){
                C[i][j] = 1;
            }
            else{
                C[i][j] = C[i-1][j-1] + C[i-1][j];
            }
        }
    }
    cout << C[n][r];
}

int main(){
    int n, r;
    cin >> n >> r;
    binomialCoeff(n, r);
return 0;
}
