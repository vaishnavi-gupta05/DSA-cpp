#include <iostream>
using namespace std;

int main(){
  
//  VARIABLE SCOOPING

// declaration in main function
//  int a;
//  a=10; // initialization
//  a=11; //  updation

// //  int a= 12; // re-declaration error: 'a' already declared in this scope

// // but
// if(true)
//   {
//     // declaration in inner block- its scope is limited to this block
//     int a= 15; // this 'a' is different from the outer 'a'
//     cout<<a<<endl; // output: 15
//   }
//   cout<<a<<endl; // output: 11 - outside the block, refers to outer 'a'

// 

  return 0;
}