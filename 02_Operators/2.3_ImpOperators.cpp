#include <iostream>
using namespace std;

int main(){

// Demonstrating logical and bitwise operators with boolean values

  // bool a= true;
  // bool b= false;
// and
  // cout<<(a & b)<<endl; //bitwise and
  // cout<<(a && b)<<endl; //logical and

// // or
//   cout<<(a | b)<<endl; // bitwise or
//   cout<<(a || b)<<endl; // logical or

// not
  // cout<<(~a)<<endl; // output: -2 because it inverts all bits.. -2 because in binary it is represented as all 1s for true and when inverted becomes all 0s with a leading 1 which indicates negative number in two's complement representation 
  // cout<<(~b)<<endl;  
  // cout<<(!a)<<endl; // output: 0 because !true is false --logical not
  // cout<<(!b)<<endl; // output: 1 because !false is true --logical not

// xor
  // cout<<(a ^ b)<<endl; // bitwise xor
  // cout<<(a != b)<<endl; // logical xor
  
// left shift
  // int a=5; // in binary: 0000...0101
  // int b=3; // in binary: 0000...0011
  // cout<<(a << 1)<<endl; // bitwise left shift also indicates multiplication by 2
  // cout<<(a >> 1)<<endl; 
  // bitwise right shift also indicates division by 2 but for negative numbers it behaves differently due to sign bit

// pre/post increment and decrement
  // int a=5;
  // cout<<a++<<endl; // prints 5, then a becomes 6
  // cout<<++a<<endl; // a becomes 7, then prints 7
  // cout<<a--<<endl; // prints 7, then a becomes 6
  // cout<<--a<<endl; // a becomes 5, then prints 5

// --------------------------------------

  // int a=6;
  // int b=6;
  // int c= ++a +1;
  // cout<<c<<endl; // output: 8 because a is pre-incremented to 7, then 1 is added.
  // int d= b++ +1 ;
  // cout<<d<<endl; // output: 7 because b is used as 6, then 1 is added, after this b becomes 8.
  
//-----------------------------------------

// int a=3;
// int b=4;
// int c= --a * b++;

// cout<<c<<endl; // output: 8 because a is pre-decremented to 2, then multiplied by b (4). After this b becomes 5.

// --------------------------------

// int a=5;
// cout<< ++a * ++a <<endl; // output: 49 because a is pre-incremented twice to 7, then multiplied (7*7). Note: This expression causes undefined behavior in C++ as it modifies 'a' more than once between sequence points.

// --------------------------------
// --------------------------------


// OPERATOR PRECEDENCE 
// try to use brackets to make the expression clear

// -----------------------------------------------------


return 0;

}