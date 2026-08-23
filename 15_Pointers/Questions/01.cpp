#include<iostream>
#include<vector>

using namespace std;

int main(){

  // what is the output of this code

  float f= 10.5;
  float p= 2.5;

  float* ptr= &f;
  (*ptr)++;
  *ptr= p;

  cout<<*ptr<<" "<<f<<" "<<p<<endl;  //2.5 2.5 2.5

  // ------------------------------------

  int a= 7;
  int b= 17;

  int *c= &b;
  *c= 7;
  cout<<a<<" "<<b<<endl;  //7 7

  // ------------------------------------

  // int* ptr2= 0;
  // int x= 10;
  // *ptr2= x;

  // cout<<*ptr2<<endl; //runtime error

  // ----------------------------------

  char ch= 'a';
  char* ptr3= &ch;

  ch++;
  cout<<*ptr3<<endl;

  // ---------------------------------

  int d= 7;
  int* ptr4= &d;
  ptr4= ptr4+3;
  cout<<d<<" "<<*ptr4<<endl;   // 7 (random value but fixed everytime)

  // Assume that the memory adress of variable 'd' is 400
  cout<<ptr4<<endl;  //412

  // ---------------------------------

  // memory adress of y is 200:
  double e= 10.54;
  double *y= &e;
  y= y+1;
  cout<<y<<endl; //208

  // ---------------------------------

  // assume integer takes 4 bytes amd integre pointer 8 bytes






  




  return 0;
}