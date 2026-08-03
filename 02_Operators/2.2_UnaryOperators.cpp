#include <iostream>
 using namespace std;

int main() {

  //   Unary Operators in C++
// Unary operators work on a single operand.

// Types of Unary Operators
// Unary plus (+)
// Unary minus (-)


// Increment (++)
// Pre-increment: ++a (increase first, then use)
int e = 10;
int f= ++e;
cout <<"f is: "<< f<< endl; // stores new value (increament first)
cout <<"e is: "<< e<< endl; // stores new value ( then use)


// Post-increment: a++ (use first, then increase)
int g = 10;
int h= g++;
cout <<"h is: "<< h<< endl; // stores old value (use first)
cout <<"g is: "<< g<< endl; // stores new value ( then increament)


// Decrement (--)
// Pre-decrement: --a
int i = 10;
int j= --i;
cout <<"j is: "<< j<< endl; // stores new value (decreament first)
cout <<"i is: "<< i<< endl; // stores new value ( then use)


// Post-decrement: a--
int k = 10;
int l= k--;
cout <<"l is: "<< l<< endl; // stores old value (use first)
cout <<"k is: "<< k<< endl; // stores the new value ( then decreament)



  return 0;
}