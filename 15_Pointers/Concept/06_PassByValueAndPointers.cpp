#include<iostream>
using namespace std;

// In a function parameter, int arr[] is treated as int* arr.
// So arr is actually a pointer to the first element of the array.
void arrayPointerInfo(int arr[]){
  cout<<"size of array arr in function: "<<sizeof(arr)<<endl; // Since arr is a pointer inside the function, sizeof(arr) gives the size of the pointer, NOT the size of the array.Usually 8 bytes on a 64-bit system and 4 bytes on a 32-bit system.

  cout<<"Address of pointer arr: "<<&arr<<endl;  // address of pointer arr
  cout<<"Value of pointer arr: "<<arr<<endl;  // value of pointer arr (address of first element)
  cout<<"Value of first element of array with pointer arr using dereference: "<<*arr<<endl;  // dereference, gives the value at that address

  return;
}

void modifyArrayElement(int arr[]){
  arr[0]= arr[0]+10;  // modify the first element of array
  return;
}

void modifyValueUsingPointer(int* ptr){
  *ptr= *ptr+10;  // modify the value of variable a using pointer
  return;
}

void modifyValuesUsingPointers(int* p, int* q){
  *p =100;
  *q= 200;
  return;
}

int printArray(int arr[], int size){
  for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

}

void demonstratePointerPassByValue(int* ptr){
  ptr= ptr+1;

}

int main(){

  int arr[10]={1,2,3,4,5};

  cout<<"size of array arr in main function: "<<sizeof(arr)<<endl; // size of array is 20 bytes (5*4) in 32 bit system, and 20 bytes (5*4) in 64 bit system
  cout<<"Address of array arr: "<<&arr<<endl;  // address of array

  arrayPointerInfo(arr); // pass by reference using pointer to array


  cout<<"array before modification: ";
  for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  modifyArrayElement(arr); // pass by reference using pointer to array


  cout<<"array after modification: ";
  for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  // --------------------------------------
  int a= 5;
  int *ptr= &a;  // pointer to int data type, store address of variable a
  modifyValueUsingPointer(ptr);  // pass by reference using pointer to int data type
  cout<<"Value of variable a after modification: "<<a<<endl;
  // ----------------------------------------

  int arr2[4]={10,20,30,40};
  int* p= &arr2[1];
  int* q= &arr2[2];

  modifyValuesUsingPointers(p,q); // modifyValuesUsingPointers() modifies the values at the addresses stored in p and q.
  printArray(arr2, 4);
  // -------------------------------------------

  // Modifing pointer only (pass by value)-->>
  int b= 10;
  int* ptrB= &b;

  cout<<"before modification: "<<endl;
  cout<<"b: "<<b<<endl;
  cout<<"ptrB: "<<ptrB<<endl;
  cout<<"*ptrB: "<<*ptrB<<endl;

  demonstratePointerPassByValue(ptrB);  // ptrB is passed by value. demonstratePointerPassByValue() receives a COPY of ptrB.

  cout<<"after modification: "<<endl;
  cout<<"b: "<<b<<endl;
  cout<<"ptrB: "<<ptrB<<endl;
  cout<<"*ptrB: "<<*ptrB<<endl;

  // the value of pointer will not change universally beacuse it is pass by value and not pass by reference.
  // However, if we modify *ptr, the value of b would change.




  return 0;
}