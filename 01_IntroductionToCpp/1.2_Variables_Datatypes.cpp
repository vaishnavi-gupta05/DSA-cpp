#include <iostream>
using namespace std;

int main() {


// Variable in C++
// A variable is a named memory location used to store data that can change during program execution.

// Rules for Naming Variables
// Must start with a letter or underscore (_value, age)
// Cannot start with a digit (1age ❌)
// Can contain letters, digits, and underscore
// Case-sensitive (Age ≠ age)
// Cannot use keywords (int, while, etc.)

// Declaration & Initialization
// int age;        // declaration
// age = 20;       // initialization
// int roll = 5;   // declaration + initialization
  


//  Data Types in C++

// 1. Basic (Primitive) Data Types

// int → integers (e.g., int a = 10;)
// float → decimal numbers (single precision)
// double → decimal numbers (double precision)
// char → single character ('a', '5')
// bool → true/false
// void → no value (used in functions)

// 2. Derived Data Types

// Array → collection of same type (int arr[5];)
// Pointer → stores address (int* p;)
// Reference → alias for variable
// Function → blocks of code

// 3. User-defined Data Types

// struct
// class
// enum
// typedef / using


// Size (commonly in 32-bit / 64-bit systems)depending upon the computer 

// int → 4 bytes
// float → 4 bytes
// double → 8 bytes
//long → 4 bytes
//longlong → 8 bytes
// char → 1 byte
// bool → 1 byte
  

//ASCII ranges:

// 0–31 → Control characters (non-printable, like \n, \t, ESC).
// 32–47 → Punctuation and symbols (Space, ! " # $ % & ' ( ) * + , - . /).
// 48–57 → Digits 0–9.
// 65–90 → Uppercase letters A–Z.
// 97–122 → Lowercase letters a–z.
// 127 → DEL (delete).

  long pi= 3.14;
  cout << sizeof (pi)<<endl; // output= 4

  char letter= '2525252';
  cout << letter << endl;// error because char can store only single character or ASCII value from 0 to 255.
  
  return 0;
  

}
