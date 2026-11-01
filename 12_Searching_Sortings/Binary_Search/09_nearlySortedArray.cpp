#include <iostream>
#include <vector>
using namespace std;

int main(){

  // SEARCH IN NEARLY SORTED ARRAY IN LOG TIME --->>>

  vector<int> arr={10, 3, 40, 20, 50, 80, 70};
  int target;
  cout<<"Enter the target element to search in the nearly sorted array: ";
  cin>>target;

  int start=0;
  int end= arr.size()-1;

  while(start<=end){
    int mid= start+(end-start)/2;

    if(arr[mid]== target){
      cout<<"Element found at index: "<<mid<<endl;
      break;
    }
    else if(mid-1>=start && arr[mid-1]== target){ //to check if the target element is present at the index mid-1. We need to check if mid-1 is greater than or equal to start to avoid accessing an index out of bounds of the array.
      cout<<"Element found at index: "<<mid-1<<endl;
      break;
    }
    else if(mid+1<end && arr[mid+1]== target){ //to check if the target element is present at the index mid+1. We need to check if mid+1 is less than end to avoid accessing an index out of bounds of the array.
      cout<<"Element found at index: "<<mid+1<<endl;  
      break;
    }    
    else if(arr[mid]< target){
      cout<<"Element is greater than mid element, so searching in the right half of the array."<<endl;
      start= mid+2; //to skip the next element as it is already checked in the condition above.
    }
    else{
      cout<<"Element is smaller than mid element, so searching in the left half of the array."<<endl;
      end= mid-2; //to skip the previous element as it is already checked in the condition above.
       
    }
  }

  return 0;
}