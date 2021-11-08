// Recursive implementation

#include<iostream>
using namespace std;

int binomialCoeff(int n, int r){
    //base condition
    if(r==0 || r==n){
        return 1;
    }
    else
     return binomialCoeff(n-1, r-1)+binomialCoeff(n-1, r);
}

int main(){
   int n, r;
   cin >> n >> r;
   cout << binomialCoeff(n, r);
return 0;
}