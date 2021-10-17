#include<iostream>
using namespace std;

void printArray(int *a, int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int insertionSort(int *a, int n){
    int temp;
    for(int i=1;i<=n;i++){
        temp = a[i];
        int j = i-1;
        while((j>=0) && (a[j]>temp)){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
}

int main(){
   int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    insertionSort(a, n);
    printArray(a, n);
return 0;
}