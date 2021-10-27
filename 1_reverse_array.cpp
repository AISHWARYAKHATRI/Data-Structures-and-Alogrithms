#include<iostream>
using namespace std;

void reverseArray(int * a, int n){
    int y=n-1;
    for(int i=0;i<n;i++){
        int start=i, end=y;
        if(start==end)
        break;
        else{
        swap(a[start], a[end]);
        y--;
        }
    }
}

void printArray(int *a, int n){
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}


int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   reverseArray(a, n);
   printArray(a, n);
return 0;
}