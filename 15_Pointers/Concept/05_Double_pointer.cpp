#include<iostream>
using namespace std;

int main(){
  int a= 5;
 
  int* p1= &a;  

  int** p2= &p1;  // double pointer, pointer to pointer.

  cout<<"&a: "<<&a<<endl;  // address of a
  cout<<"p1: "<<p1<<endl;  // address of a
  cout<<"&p1: "<<&p1<<endl;  // address of pointer p1
  cout<<"*p1: "<<*p1<<endl;  // dereference, gives the value at that address, which is value of a
  cout<<"p2: "<<p2<<endl;  // address of pointer p1
  cout<<"&p2: "<<&p2<<endl;  // address of pointer p2
  cout<<"*p2: "<<*p2<<endl;  // dereference, gives the value at that address, which is address of a
  cout<<"**p2: "<<**p2<<endl;  // dereference, gives the value at that address, which is value of a

  // cout<<"**p1: "<<**p1<<endl;  // error: p1 is a pointer to int, we cannot dereference it twice, it will give error


  int***p3= &p2; // triple pointer, pointer to pointer to pointer.

  // understanding the concept of triple pointer is a bit tricky, but we can understand it with the help of memory blocks.

  // now we have 4 lets say blocks in memory,
  // a
  // p1
  // p2
  // p3

  // to get the value of a, we can use severel methods-->>

  cout<<"Value of 'a': "<<endl;
  cout<<"a: "<<a<<endl;
  cout<<"*p1: "<<*p1<<endl;
  cout<<"**p2: "<<**p2<<endl;
  cout<<"***p3: "<<***p3<<endl;

  // to get the value of p1, we can use severel methods-->>
  
  cout<<"Value of 'p1': "<<endl;
  cout<<"p1: "<<p1<<endl;
  cout<<"*p2: "<<*p2<<endl;
  cout<<"**p3: "<<**p3<<endl;

  // to get the value of p2, we can use severel methods-->>
  cout<<"Value of 'p2': "<<endl;
  cout<<"p2: "<<p2<<endl;
  cout<<"*p3: "<<*p3<<endl;

  // to get the value of p3, we can use-->>
  cout<<"Value of 'p3': "<<endl;
  cout<<"p3: "<<p3<<endl;

  // ----------------------------------------

  
  
 


  return 0;
}