#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;


int main(){

  // FIND DUBLICATE ELEMENTS

  vector<int> arr= {1,2,1,2,3,4,1,6,7,8,8,4,3};
  vector<int> valueofj ;
  
  for(int i=0; i<arr.size(); i++){
    bool alreadySeen= false;

    // Check if element appeared before
    for(int k = 0; k < i; k++) {
        if(arr[i] == arr[k]) {
            alreadySeen = true;
            break;
        }
    }
    if(alreadySeen)
        continue;


    for(int j=i+1; j<arr.size(); j++){
      if (arr[i]==arr[j]){
        cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        valueofj.push_back(j);
        break;
      }
    }
  }
  

  return 0;
}