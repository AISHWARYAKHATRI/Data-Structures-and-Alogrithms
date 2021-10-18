#include<iostream>
using namespace std;

void max_heap(int a[], int n, int i){
    int large = i;
    int l = (2*i)+1;
    int r = (2*i)+2;
    while(l<n && a[l]>a[large]){
        large = l;
    }
    while(r<n && a[r]>a[large]){
        large = r;
    }

    if(large!=i){
        swap(a[i], a[large]);
        max_heap(a, n, large);
    }
}

void heap_sort(int a[], int n){
    for(int i=n/2-1;i>=0;i--){
        max_heap(a, n, i);
    }
    for(int i=n-1;i>0;i--){
        swap(a[0], a[i]);
        max_heap(a, i, 0);
    }
    }

void printArray(int *a, int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    heap_sort(a, n);
    printArray(a,n);
 return 0;
}

    