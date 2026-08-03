#include <iostream>
#include <limits.h>
using namespace std;


int main(){

//  create an array and make all the elements to 1

int arr[5];

cout<<"enter 5 elemets of array: ";
for(int i=0; i<5; i++){
  cin>>arr[i];
}
cout<<"All the elements of array are: ";
for(int i=0; i<5; i++){
  cout<< arr[i]<<" ";
}
cout<< endl;

for(int i=0; i<5; i++){
  arr[i]=1;
}
cout<<"All the elements of array as 1 : ";
for(int i=0; i<5; i++){
  cout<< arr[i]<<" ";
}
cout<< endl;

  return 0;
}