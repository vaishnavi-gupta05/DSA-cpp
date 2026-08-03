#include <iostream>
#include <vector>
using namespace std;

// SORT 0's AND 1's IN AN ARRAY

vector<int> sortedArr(vector<int> arr){
  int s=0;
  int e=arr.size()-1;
  for(int i=0; i<e; i++){
    if(arr[i]==0){
      swap(arr[i], arr[s]);
      s++;
    }
    else{
      swap(arr[i], arr[e]);
      i--;   // decrement i to recheck the swapped element
      e--;   
    }
  }
  for(int i=0; i<arr.size(); i++){
    cout<< arr[i]<< " ";
  }
}

int main(){

  vector<int> arr{0,1,1,0,1,0,1,0,1};

  sortedArr(arr);

  return 0;

}