#include <iostream>
#include <limits.h>
using namespace std;

bool linearSearch(int arr[], int size, int key){
  for(int i=0; i<size; i++){
    if(arr[i]==key){
      return true;
    } 
  }
  return false; 
  
}

int main(){

// LINEAR SEARCH 

int arr[6]= {11, 22, 33, 44, 55, 66};
int size=6;
int key;
cout<<"Enter the elements to be searched: ";
cin>> key;

if(linearSearch(arr, size, key)){
  cout<<"Element found in the array"<< endl;
}
else{
  cout<<"Element not found in the array"<< endl;
}

  return 0;

}