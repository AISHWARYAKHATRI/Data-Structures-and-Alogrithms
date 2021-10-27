#include<iostream>
using namespace std;

struct Pair{
    int min;
    int max;
};

struct Pair max_min_array(int * a, int n){
    struct Pair minmax;
    minmax.min=a[0];
    minmax.max=a[0];

    for(int i=1;i<n;i++){
        if(a[i]>minmax.max){
            minmax.max=a[i];
        }
        else
        minmax.min=a[i];
    }
    return minmax;
}


int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  struct Pair minmax = max_min_array(a, n);
  cout << "Min: "<< minmax.min<<endl;
  cout << "Max: "<< minmax.max<<endl;

return 0;
}