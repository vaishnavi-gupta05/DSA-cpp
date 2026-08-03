// WHAT IS ARRAY?
// An array in C++ is a collection of elements of the same data type stored in contiguous memory locations, accessed using a common name and index values.
// SYNTAX OF ARRAY IN C++
// dataType arrayName[size];

#include <iostream>
#include <limits.h>
using namespace std;


int main(){

  // array declaration
  
  int marks[7];
  cout<< marks<< endl;  // memory location
  cout<< &marks<< endl;  //memory location
  cout<< "Array created successfully"<< endl;

  // initialization of array
  int arr[]= { 23, 45, 67, 89, 12}; // size will be determined by number of elements
  int brr[5]= { 34, 56, 78, 90, 11}; // size is fixed as 5
  int crr[10]= { 22, 44}; // rest will be initialized to 0
  // int drr[4]= {1,2,3,5,6}; // error: excess elements in array initializer

  cout<< "Array initialized successfully"<< endl;
  

  // ------------------------

  // INDEX IN ARRAY C++

  // Definition
  // An index is a number that represents the position of an element in an array. It is used to access, modify, or read array elements.

  // Key Points
  // Index always starts from 0 in C++
  // Last index = size − 1
  // Index is written inside square brackets [ ]
  // Each index points to a specific memory location

  // Why Array Index Starts from 0

  // Main Reason
  // In C++, the array index represents the offset from the base memory address, not the count of elements.

  // Memory Logic
  // The address of an array element is calculated as:
  // address = base_address + index × size_of_datatype
  // For first element: index = 0 → no offset needed
  // Makes memory access fast and efficient

  // creating an array

  int arr[]= { 23, 45, 67, 89, 12};

  cout<< arr[3]<< endl;

  // printing all elements of array

  cout<<"all the elements of the given array 'arr' is:";
  for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";  
  }
  cout<<endl;

  return 0;
}