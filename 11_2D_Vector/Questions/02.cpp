#include <iostream>
#include <vector>
using namespace std;

int main(){

  // MOVE ALL -VE NUMBERS TO ONE SIDE OF THE ARRAY
  vector<int> arr= {1,-4,5,6,-8,-9,3,7,-2,-6};  

  int j= arr.size()-1;
  for(int i=0; i<j; i++){
    if(arr[i]>0){
      swap(arr[i], arr[j]);
      j--;
      i--;
    }
  }
  for(int i=0; i<arr.size(); i++){
   cout<< arr[i]<<" ";
  }


  return 0;
}