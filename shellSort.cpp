#include<iostream>
using namespace std;

int shellSort(int *a, int n){
    int gap, temp;
    for(gap=n/2;gap>=1;gap/=2){
        for(int j=gap;j<n;j++){
            for(int i=j-gap;i>=0;i-gap){
                if(a[i+gap]>a[i]){
                break;
                }
                else{
                temp = a[i+gap];
                a[i+gap] = a[i];
                a[i] = temp;
                }
            }
        }
    }
    return 0;
}

void printArray(int *a, int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  shellSort(a, n);
  printArray(a, n);
return 0;
}