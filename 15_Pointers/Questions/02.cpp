#include <iostream>
using namespace std;

int main(){

  // assume integer takes 4 bytes amd integre pointer 8 bytes

  int a[5];
  int *c;
  cout<<sizeof(a)<<" "<<sizeof(c)<<endl;  // 20 8

  // -------------------------------

  int b[]= {1,2,3,4};
  cout<<*(b)<<" "<<*(b+1)<<endl; // 1 2

  // -------------------------------

  int d[]= {1,2,3,4};
  // int* p= d++;  //error beacuse stack pointer are permanent
  // cout<<*p<<endl;

  // ---------------------------------

  int arr[]={4,5,6,7};
  int *p= (arr+1);
  cout<<*arr +9;  //13

  // ---------------------------------

  


  return 0;
}


