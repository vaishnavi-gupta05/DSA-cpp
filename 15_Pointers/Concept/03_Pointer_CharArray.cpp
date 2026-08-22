#include<iostream>
using namespace std;

int main(){

  char ch[5]= "abcd";

  cout<<"printing the ch array: "<<ch<<endl; // print array
  cout<<"Value of first element of array: "<<ch[0]<<endl; // print the value of first element of array
  cout<<"Value of second element of array: "<<ch[1]<<endl; // print the value of second element of array
  // ------------------------------------------------

  // &ch and &ch[0] both point to the beginning of the array,
  // but when passed to cout, they are treated as C-strings,
  // so the characters are printed instead of the memory address.

  cout << "Output of &ch: " << &ch << endl;                   // Prints address
  cout << "Output of &ch[0]: " << &ch[0] << endl;             // Prints abcd
  cout << "Output of &ch[1]: " << &ch[1] << endl;             // Prints bcd

  // BUT if we want to print the actual memory addresses, we can use static_cast<void*> to cast the pointers to void* type before printing them.
  cout << "Address of first element: " << static_cast<void*>(&ch[0]) << endl;
  cout << "Address of second element: " << static_cast<void*>(&ch[1]) << endl;


  char* p= ch; // this is correct, we can store address of first element of array as pointer to char data type
  char* p0= &ch[0]; // we can store address of first element of array as pointer to char data type
  char* p1= &ch[1]; // we can store address of second element of array as pointer to char data type

  // but when passed in cout, they are treated as C-strings, so the characters are printed instead of the memory address.
  cout<<"Output of p: "<<p<<endl; // print the array
  cout<<"Output of p0: "<<p0<<endl; // print the value from first element of array
  cout<<"Output of p1: "<<p1<<endl; // print the value from second element of array
  // ------------------------------------------------------------

  // BUT-->>
  // dereferencing the pointers will give us the actual values stored at those memory locations, which are the characters in the array.
  cout<<"Output of *p: "<<*p<<endl; // dereference, gives the value at that address
  cout<<"Output of *p0: "<<*p0<<endl; // dereference, gives the value at that address
  cout<<"Output of *p1: "<<*p1<<endl; // dereference, gives the value at that address

  // EXAMPLE-->>
  char greet[20]="hello";
  char* cptr= &greet[0]; // we can store address of first element of array as pointer to char data type

  cout<<"greet: "<<greet<<endl; // hello
  cout<<"&greet: "<<&greet<<endl;   // Address of greet array
  cout<<"*greet: "<<*greet<<endl; // h
  cout<<"*(greet+3): "<<*(greet+3)<<endl; // l
  cout<<"cptr: "<<cptr<<endl;  //hello
  cout<<"&cptr: "<<&cptr<<endl;  // address of cptr
  cout<<"*cptr: "<<*cptr<<endl;   // h
  cout<<"*(cptr+3): "<<*(cptr+3)<<endl;  //l
  cout<<"cptr+2: "<<cptr+2<<endl; //llo

  // -----------------------------------------------

  // Another example of pointer to char array (single character)

  char single_Ch= 'a';

  char* ptr= &single_Ch; // we can store address of single character as pointer to char data 
  
  cout<<"ptr: "<<ptr<<endl; // "a" with garbage values after it, because it's not a null-terminated string

  //------------------------------------------------

  char name[20]= "John Doe";
  cout<<"name: "<<name<<endl; // John Doe

  const char* c= "John Doe"; 
  cout<<"c: "<<c<<endl; // John Doe  // Bad practice, because c is a pointer to a string literal, which is stored in read-only memory. Modifying the contents of a string literal is undefined behavior.

  //----------------------------------------------

  

  

  





  return 0;
}
