#include <iostream>
using namespace std;

int main() {
//Operators in C++
//Operators are special symbols that perform operations on variables and values.


//1. Arithmetic Operators
//   + - * / %

  int a=10, b=5;
  int sum= a+b;
  cout<< sum << endl;
  cout << "sum is :" << (a+b)<< endl;
  cout << "difference is :" << (a-b)<< endl;
  cout << "product is :" << (a*b)<< endl;
  cout << "remainder is :" << (a%b)<< endl;
  cout << "division is :" << (a/b)<< endl; 
  cout << "division is :" << (b/a)<< endl; //gives an integer
  //but
  int c=5;
  float d=2;
  cout<< (c/d)<< endl; // return floating value
  //and
  cout<< (b/ (double)a)<<endl;// used type casting


// 2. Relational (Comparison) Operators
// (== != > < >= <=)
// Used for comparisons → result is true(1)/false(0)

cout <<( 3<5) << endl;
cout<< (3> 5) << endl;
cout<< (3>= 3) << endl;
cout<< (5 >= 5) << endl;
cout<< (3!=5) << endl; // not equal to
cout<< (3==5) << endl;
cout<< (3==3) << endl;


// 3. Logical Operators
// logical and (&&) 
cout << (( 3<5) && (5>8)) << endl; // true if all of them is true. compiler stop checking if one of them is false.

// logical or (||)
cout <<((3<5) || (5>8)) << endl; // true if one of them is true

// logical not (!)
cout <<( 3<5) << endl; // statement is true
cout << !( 3<5) << endl; // (!) this turn the result to false
// Used with conditions.


// 4. Assignment Operators
// = += -= *= /= %= <<= >>= &= |= ^=



// 5. Increment/Decrement
// ++ -- (prefix, postfix).


// 6. Bitwise Operators
// & | ^ ~ << >>

int bitwiseAnd= 1 & 1;  // '1' , rest are '0'
//   101   (5)
// & 011   (3)
// -----
//   001   (1)

int bitwiseOr= 0 | 0;   // '0' , rest are '1'
//   101   (5)
// | 011   (3)
// -----
//   111   (7)

int bitwiseXor= 1 ^ 0;  // '1' , rest are '0'
//   101   (5)
// ^ 011   (3)
// -----
//   110   (6)

int bitwiseNot= ~ 1;  // '0' --->> ~n = -(n + 1) 
// 5 = 00000101
// ~5 = 11111010  (-6)

int leftShift= 5 << 1; // multiply by 2
// 5 = 00000101
// 5 << 1 = 00001010 (10)

int rightShift= 5 >> 1; // divide by 2
// 5 = 00000101
// 5 >> 1 = 00000010 (2)


// 7. Conditional / Ternary Operator
// condition ? expr1 : expr2


// 8. Other Operators
// sizeof → size of datatype/variable
// , (comma) → separate expressions
// type cast → (int)x, static_cast
// pointer operators → * & ->
// scope resolution → ::
// member access → . and ->

  cout<<"program to calculate the sum of two numbers:"<< endl;
  int number1, number2;  
  cout<< "number 1 is: " ;
  cin >> number1;
  cout<< "number 2 is: " ;
  cin >> number2;
  cout << "sum is: "<< ( number1+number2) << endl;

  
  return 0;


}




