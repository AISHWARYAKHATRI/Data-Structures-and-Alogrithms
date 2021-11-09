// Recursion by brute-force algoritm or exhaustive search

#include<iostream>
using namespace std;

int knapsack(int wt[], int  val[], int w, int n){

    //Base Condt
    if(w == 0 || n == 0){
        return 0;
    }

    if(wt[n-1] > w)
    return knapsack(wt, val, w, n-1);

    //Choice Diagram
    else
    return max(val[n-1]+knapsack(wt, val, w-wt[n-1], n-1), knapsack(wt, val, w, n-1));
}

int main(){
    int wt[] = {1, 1, 1};
    int val[] = {10, 20, 30};
    int w = 2;
    int n = sizeof(val)/sizeof(val[0]);
    cout << knapsack(wt, val, w, n) << endl;
return 0;
}