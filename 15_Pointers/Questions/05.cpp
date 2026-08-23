#include <iostream>
using namespace std;

void Q(int z){
  z+=z;
  cout<<z<<" ";
}

void P(int *y){
  int x= *y+2;
  Q(x);
  *y= x-1;
  cout<<x<<" ";
}

int main(){
  
  int x=5;
  P(&x);
  cout<<x;
  cout<<endl;  //14 7 6

  // ----------------------

  int a=10;
  int *p = &a;
  int **q= &p;
  int b=20;
  *q= &b;
  (*p)++;

  cout<<a<<" "<<b<<endl;  //10 21

  // --------------------------------



  return 0;
}