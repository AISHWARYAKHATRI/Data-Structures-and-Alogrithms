#include<iostream>
using namespace std;


int printArray(int *A, int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";    
        }
        cout<<endl;
}

int bubbleSort(int *A, int n){
    int temp;
    bool sorted;
    for(int i=0;i<n-1;i++){
        sorted=false;
        for(int j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;   
                sorted=true;        
            }
            }
        if(sorted==false)
        break;
    }
}

int main(){
    int n;
    cin>>n;
    int i, j, arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr, n);   //function to sort array
    printArray(arr, n);   //printing array after sorting

}
    