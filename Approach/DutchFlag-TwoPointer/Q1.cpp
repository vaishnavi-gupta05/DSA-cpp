#include <iostream>
#include <vector>
using namespace std;

int main(){

// Move all the negatives to lest side of the array and all the positives to the right side of the array. (Dutch Flag Problem)

  vector<int> arr= {1,2,-3,4,-5,6,-7,8,-9};

  int l=0;
  int r=arr.size()-1;

  while(l<=r){
    if(arr[l]<0){
      l++;
    }
    else if(arr[r]>0){
      r--;
    }
    else{
      swap(arr[l], arr[r]);
      l++;
      r--;
    }
  }

  for(int i=0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
  }

}
