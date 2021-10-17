#include<iostream>
using namespace std;

int selectionSort(int *a, int n){
    int i, j;
    for(i=0;i<n-1;i++){
        int min=i, temp;
        for(j=i+1;j<n;j++){
             if(a[j]<a[min]){
                 min=j;
             }
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
        }
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
    selectionSort(a, n);
    printArray(a, n);
return 0;
}