#include <iostream>
#include <limits.h>
using namespace std;

int extreme_pairs(int arr[], int size){
  for(int i=0, j=size-1; i<=j; i++, j--){
    if(i==j){
      cout<<"("<<arr[i]<<")";
    }
    else{
      cout<<"("<<arr[i]<<","<<arr[j]<<")";
    }
    cout<<endl;
  }

}

int main(){




// extereme prints

int arr[11]= {23, 45, 67, 89, 12, 5, 90, 34, 76, 11, 56};
int size=11;

extreme_pairs(arr, size);


  return 0;
}