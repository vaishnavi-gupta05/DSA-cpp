#include<iostream>
using namespace std;

void sizeOfArray(int arr[]){
  cout<<"size of array arr in function: "<<sizeof(arr)<<endl; // size of pointer is 8 bytes in 64 bit system, and 4 bytes in 32 bit system
  return;
}

int main(){

  int arr[5]={1,2,3,4,5};

  cout<<arr<<endl;  // address of first element of array
  cout<<&arr<<endl;  // address of first element of array
  cout<<&arr[0]<<endl;  // address of first element of array
  cout<<&arr[1]<<endl;  // address of second element of array

  // we can store address of array as:
  int* p= arr; // ptr is a pointer to int data which store address of first element of array

  int* p1= &arr[0]; // ptr is a pointer to int data which store address of first element of array

  int* p2= &arr[1]; // ptr is a pointer to int data which store address of second element of array

  cout<<"Address of first element of array with pointer p: "<<p<<endl;  // print the address of first element of array
  cout<<"Address of first element of array with pointer p1: "<<p1<<endl;  // print the address of first element of array
  cout<<"Address of second element of array with pointer p2: "<<p2<<endl;  // print the address of second element of array

  cout<<"Value of first element of array with pointer p using dereference: "<<*p<<endl;  // dereference, gives the value at that address


  // Also 'arr' refer to base address of array, as well as address of first element of array, so we can use 'arr' as pointer to first element of array
  // and we can use dereference operator to access the value of first element of array

  cout<<"Value of first element of array with pointer arr using dereference: "<<*arr<<endl;  // dereference, gives the value at that address

  cout<<"Value of first element of array with pointer &arr[0] using dereference: "<<*&arr[0]<<endl;  // dereference, gives the value at that address

  // ---------------------------------

  // Arithmetic of pointer with array--->>

  cout<<"Value of second element of array with pointer (arr+1) using dereference: "<<*(arr+1)<<endl;  // dereference, gives the value at that address, arr+1 gives the address of second element of array 

  cout<<"Value of second element of array with pointer (p+1) using dereference: "<<*(p+1)<<endl;  // dereference, gives the value at that address, p+1 gives the address of second element of array

  // ------------------------------
  cout<<3[arr]<<endl;  // 3[arr] is same as arr[3], gives the value of fourth element of array
  // ------------------------------

  // arr= arr+1;  // error: An array name essentially decays into the address of its first element (a constant pointer), we cannot change the base address of array, it is fixed at compile time
  // but

  p= p+1;  // we can change the address of pointer, it is not fixed at compile time

  // --------------------------------

  cout<<sizeof(arr)<<endl; // size of array is 20 bytes (5*4) in 32 bit system, and 20 bytes (5*4) in 64 bit system
  cout<<sizeof(p)<<endl;  // size of pointer is 8 bytes in 64 bit system, and 4 bytes in 32 bit system

  cout<<sizeof(*p)<<endl;  // size of data type pointed by pointer is 4 bytes.

  // ----------------------------------

  // pass by reference using pointer to array
  int arr1[10]= {2,4,6,8,10};
  cout<<"size of array arr1 in main function: "<<sizeof(arr1)<<endl; // size of array is 20 bytes (5*4) in 32 bit system, and 20 bytes (5*4) in 64 bit system

  sizeOfArray(arr1); // size of pointer is 8 bytes in 64 bit system, and 4 bytes in 32 bit system

  return 0;


}