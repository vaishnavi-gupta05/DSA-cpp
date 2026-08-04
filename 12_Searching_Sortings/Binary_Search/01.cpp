#include <iostream>
#include <vector>
using namespace std;

int indexOftarget(int arr[], int size, int target){
  int start=0;
  int end= size-1;

  while(end>=start){
    int i= (start+end)/2;
    if(arr[i]==target){
      
      return i;
    }
    else if(arr[i]<target){
      start=i+1;
    }
    else{
      end=i-1;
    }
  }

  return -1;
}

int main(){
  
  // //BINARY SEARCHING--->>>>

  int arr[]={2,5,6,8,9,10,12};
  int size=7;
  int target=6;


  int result=indexOftarget(arr, size, target);

  if(result==-1){
    cout<<"not found";
  }
  else{
    cout<<"elemets found at index " << result;
  }



    



  return 0;
}