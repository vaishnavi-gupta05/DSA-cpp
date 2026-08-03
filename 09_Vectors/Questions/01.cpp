#include <iostream>
#include <vector>
using namespace std;



int main(){

  // FIND UNIQUE ELEMENTS IN AN ARRAY
  // given array: 1,2,4,2,1,3,6,5,5,6,4
  // every element appears twice except one element
  // find that unique element

  vector<int> arr{1,2,4,2,1,3,6,5,5,6,4};
  // method 1

  int count=0;
  for(int i=0; i<arr.size(); i++){
    for(int j=0; j<arr.size(); j++){
      if (arr[i]==arr[j] && i!=j){
        count++;
      }
    }

    if(count==0){
      cout<<arr[i];
    }

    count=0;
  }
  cout<<endl;

  // method 2
  // XOR operation

  int ans=0;
  for(int i=0; i< arr.size(); i++){
    ans= ans^arr[i];
  }

  cout<< ans<< endl;



  return 0;

}