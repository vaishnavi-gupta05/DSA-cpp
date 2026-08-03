#include <iostream>
#include <limits.h>
using namespace std;


int main(){

// take 5 elements in array and print doubles of each element

int arr[5];
cout<<"Enter the elemets of array: ";

for(int i=0; i<5; i++){
  cin>> arr[i];  
}

cout<<"Doubles of each element are: ";
for (int i=0; i<5; i++){
  cout<< 2*arr[i]<<" ";
}
cout<< endl;

  return 0;
}