#include <iostream>
#include <limits.h>
using namespace std;


int main(){
  // taking values as input from user

  int brr[5];
  cout<<"Enter 5 elements for the array 'brr': ";
  
  for(int i=0; i<5; i++){
    int n;
    cin>>n;
    brr[i]= n; //or
    cin>> brr[i];
}  

  //printing the elements of array 'brr'
  cout<<"The elements of the array 'brr' are: ";
  for(int i=0; i<5; i++){
    cout<< brr[i]<<" ";
  }
  cout<< endl;


return 0;
}