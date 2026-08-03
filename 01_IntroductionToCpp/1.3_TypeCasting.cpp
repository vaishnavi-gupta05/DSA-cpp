#include <iostream>
using namespace std;
int main() {

  //Type casting in C++ = Converting one data type into another.
  
  //Implicit (Type conversion) → done automatically by compiler.
  char grade= 'A'; // 1 byte
  int newgrade = grade ; // converted into 4 byte

  //Explicit (Type casting) → done manually by programmer.
  double price= 100.99;   //8 bytes
  int newPrice = (int)price; // convertes into smallter bytes -- 4 bytes
  
  cout << newgrade<< endl; // return ASCII values
  cout << newPrice<< endl; //remove the decimal part
   
  return 0;
}
