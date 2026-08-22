#include <iostream>
using namespace std;

int main(){

  int a= 5;
  cout<<"Address of a: "<<&a<<endl;  //output: hexadecimal number (address)
  // we cannot decide which memory location will used for differnt variables, it is managed by OS

  // we can store address as:

  int* p1= &a;  // ptr is a pointer to int data which store address of operator
  cout<<"Address of a with pointer p1: "<< p1<< endl;  //  print the address of operator

  cout<<"Value of a with pointer p1 using dereference: "<<*p1<<endl;  // dereference, gives the value at that address

  cout<<"size of int pointer: "<<sizeof(p1)<<endl;


  // to find the adress of pointer
  void *p2= &p1;
  cout<<"Address of pointer p1: "<<p2<<endl; 
  // We can also do this by double pointer method-->
  int** p3= &p1;
  cout<<"Address of pointer p1 with double pointer: "<<p3<<endl;  // address of pointer p1
  cout<<"Value of a with double pointer p3 using dereference: "<<**p3<<endl;  // dereference, gives the value at that address

  // --------------------------->>>

  // copy of pointer in diff pointer-->>
  int* p1_copy= p1;
  cout<<"copy of p1: "<<p1_copy<<endl; //copy of p1
  cout<<"Address of p_copy: "<<&p1_copy<<endl;  // address of pointer where the copy of p1 is stored

  cout<<"Accessing value of a with copy of pointer p1: "<<*p1_copy<<endl;  // gives the value of 'a' as p1 and p1_Copy stores the same address

  // ------------------------->>>

  // char is an exception-->>
  char ch= 'z';
  char* p4= &ch;
  cout<<*p4<<endl;  // dereference, gives the value at that address
  cout<< (void*)p4<<endl;  //use (void*) for address else garnage value or 'z'

  cout<<"size of char pointer: "<<sizeof(p4)<<endl;

  // ----------------------->>>>

  // Best practice: never leave a pointer uninitialized. Either assign it a valid address or set it to nullptr.

  int* p = nullptr;
  if (p == nullptr) {
      cout << "Pointer is empty"<<endl;
  }

  // --------------------->>>>

  // Pointer Arithmetic--->>>

  int x= 5;
  int* ptr= &x;

  cout<<"x: "<<x<<endl;
  cout<<"&x: "<<&x<<endl;
  cout<<"ptr: "<<ptr<<endl;
  cout<<"*ptr: "<<*ptr<<endl;
  cout<<"&ptr: "<<&ptr<<endl;
  cout<<"*(ptr+1): "<<*(ptr+1)<<endl;
  cout<<"ptr+1: "<<ptr+1<<endl;
  cout<<"*ptr+1: "<<*ptr+1<<endl;

  // 











  return 0;
}