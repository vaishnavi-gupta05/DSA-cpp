#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;


int main(){

// SORT 0's , 1's and 2's IN AN 1-D ARRAY

  vector<int> arr= {0,1,0,1,2,1,0,2,1,0,0,1,2,2};

   
  int left= 0;
  int right= arr.size()-1;

  cout<<"{ ";
  for(int i=0; i< arr.size(); i++){
    cout<< arr[i]<<" ";
  }
  cout<<"}"<<endl;
  
  for(int i=0; i<=right; i++){
    if(arr[i]==2){
      swap(arr[i], arr[right]);
      i--;
      right--;
    }
    else if (arr[i]==0){
      swap(arr[i], arr[left]);
      left++;
    }
  }

    cout<<"{ ";
    for(int i=0; i< arr.size(); i++){
      cout<< arr[i]<<" ";
    }
    cout<<"}"<<endl;;


  // ANOTHER METHOD TO SORT ANY SET OF INTEGERS-->>

    
  for(int j= arr.size()-1 ; j>=0; j--){
    for(int i=0; i<j; i++){
      if(arr[i]> arr[j]){
        swap(arr[i], arr[j]);
        i--;
        }
      }
    }   

    cout<<"{ ";
    for(int i=0; i< arr.size(); i++){
      cout<< arr[i]<<" ";
    }
    cout<<"}"<<endl;




  return 0;

}