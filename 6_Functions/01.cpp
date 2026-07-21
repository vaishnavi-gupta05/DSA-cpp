#include <iostream>
using namespace std;

// WRITE A FUNCTION TO ADD TWO NUMBERS

int add(int a, int b){
  int c= a+b;
  return c;
}

int main(){ 
  int a, b;
  cout<<"enter the value of a: ";
  cin>>a;
  cout<<"enter the value of b: ";
  cin>>b;
  int sum= add(a,b);
  cout<<"sum is: "<<sum <<endl;

  return 0;
}