#include <iostream>
using namespace std;

int main(){

  int a=10;
  int &ref= a;  // ref is a reference to a

  cout<<"a: "<<a<<endl;
  cout<<"ref: "<<ref<<endl;

  // Output:
  // a: 10
  // ref: 10

  // KEY FEATURES-->>

  // int &not_initialized_ref;  //Error — reference must be initialized
  // int &initialized_ref= a;

  // ----------------

  // Cannot be reassigned to refer another variable

  int b=20;
  ref= b;   // this doesnt make ref refer to b but instead assign b's value to a (20)

  cout<<"a: "<<a<<endl;

  // -----------------

  // No saparate memory
  cout<<"&a: "<<&a<<" , "<<"&ref: "<<&ref<<endl;

  // -----------------

  // No NULL reference — unlike pointers, a reference must always refer to a valid object.
  
  // Changes reflect both ways — modifying ref modifies a, and vice versa.

  a= 30;  //auto update ref also
  cout<<"a: "<<a<<" , "<< "ref: "<<ref <<endl;



  return 0;
}