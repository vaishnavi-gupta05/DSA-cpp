#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){

  // FIND COMMON ELEMENTS IN 3 ARRAYS

  vector<int> arr1= {1,2,3,4,5,6,7,8,9};
  vector<int> arr2= {4,5,2,9,10};
  vector<int> arr3= {2,5,9,10,11,8};

  for(int i=0; i<arr1.size(); i++){
    for(int j=0; j<arr2.size(); j++){
      for(int k=0; k<arr3.size(); k++){
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k] ){
          cout<<arr1[i]<<" ";
          break;
        }
      }
    }
  }


  return 0;
}