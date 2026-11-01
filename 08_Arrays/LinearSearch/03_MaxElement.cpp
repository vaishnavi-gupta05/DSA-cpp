#include <iostream>
#include <limits.h>
using namespace std;

int max(int arr[], int size){
  int maximum= INT_MIN; // Initialize maximum with the smallest integer value
  for( int i=0; i< size; i++){
    if(arr[i]>=maximum){
      maximum=arr[i];
    }
  }
  cout<< maximum;
}

int main(){

// FIND MAXIMUM NUMBER IN AN ARRAY
int arr[8]= {-23, -45, -67, -89, -12, -90, -34, -92};
int size =8;
cout<<"The maximum number in the array is: ";
max(arr, size);

  return 0;
}