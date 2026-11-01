#include <iostream>
#include <limits.h>
using namespace std;

void createArray(int arr[], int size){
  cout<<"enter the values in array:"<< endl;
  for(int i=0; i<size; i++){
    cin>>arr[i];
  } 
}

void printArray(int arr[], int size){
  for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
}

int min(int arr[], int size){
  int minimum= INT_MAX; // Initialize minimum with the largest integer value
  for(int i=0; i<size; i++){
    if(arr[i]<=minimum){
      minimum=arr[i];
    }
  }
  return minimum;
}


int main(){

// FIND MINIMUM NUMBER IN AN ARRAY

int size;
cout<<"enter the size of array: ";
cin>> size;

int arr[size];

createArray(arr, size);

cout<<"array:"<<endl;
printArray(arr, size);
cout<<endl;

cout<<"Minimum value in array is: "<< min(arr, size)<<endl;


return 0;
}