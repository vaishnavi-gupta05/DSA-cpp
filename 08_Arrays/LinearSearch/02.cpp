#include <iostream>
#include <limits.h>
using namespace std;

int count(int arr[], int size, int key){
  int count=0;
  for(int i=0; i< size; i++){
    if (arr[i]==key){
      count++;

    }
  }
  return count;
}

int main(){

// COUNTING ELEMENTS IN AN ARRAY
int arr[20]= {0,1,0,1,1,1,0,1,0,1,0,1,0,1,1,1,0,0,1,1};
int size=20;
int key;
cout<<"Enter the element to be counted (0 or 1): ";
cin>> key;

cout<<"The count of "<< key<<" in the array is: "<<
count(arr, size, key);
cout<<endl;

  return 0;
}