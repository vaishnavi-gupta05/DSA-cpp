#include <iostream>
using namespace std;

void func(int* ptr){
  ptr= ptr+1;
}

int main(){

  int a= 5;
  int*p = &a;

  cout<<"before function call: "<<endl;
  cout<<"a: "<<a<<endl;
  cout<<"p: "<<p<<endl;  // address of a
  cout<<"*p: "<<*p<<endl;  // value of a
  func(p);
  cout<<"after function call: "<<endl;
  cout<<"a: "<<a<<endl;
  cout<<"p: "<<p<<endl;  // address of a
  cout<<"*p: "<<*p<<endl;  // value of a


  return 0;
}