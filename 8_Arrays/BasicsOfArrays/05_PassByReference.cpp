#include <iostream>
#include <limits.h>
using namespace std;

void modifyArray(int arr[]){
  for (int i=0; i<5; i++){
    arr[1] = arr[1] + 5;
  }
  cout<<"Array after modifying: ";
  cout<< arr[1]<<endl;
}

int main(){

// pass by reference using arrays (NO PASS BY VALUE IN ARRAYS)
int arr[5]= {2,4,6,8,10};
cout<<"Array before modifying: ";
cout<< arr[1];
cout<<endl;

// function to modify array
modifyArray(arr);
// printing modified array element in main function
cout<<"Array printed in main after modifying: ";
cout<< arr[1]<< endl;

// printing final array
cout<<"Final array is: ";
for(int i=0; i<5; i++){
  cout<< arr[i]<<" ";
}
cout<<endl;
cout<< "thus, arrays are passed by reference in functions in C++"<< endl;

  return 0;
}