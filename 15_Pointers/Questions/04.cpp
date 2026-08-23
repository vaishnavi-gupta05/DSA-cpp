#include <iostream>
using namespace std;

void changeSign(int *p){
  *p= (*p) * -1;
}

void fun(int a[]){
  cout<<a[0]<<" ";
}

void square(int *p){
  int x= 10;
  p= &x;
  *p= (*p) * (*p);
}

int main(){

  int numbers[5];
  int* p;
  p= numbers;
  *p=10;
  p= &numbers[2];
  *p=20;
  p--;
  *p=30;
  p= numbers+3;
  *p=40;
  p= numbers;
  *(p+4)=50;

  for(int n=0; n<5; n++){
    cout<<numbers[n]<<" ";
  }
  cout<<endl;

  // --------------------------

  char st[]="ABCD";
  for(int i=0; st[i]!='\0'; i++){
    cout<<st[i]<<*(st)+i<< *(st+i)<<i[st]<<endl;
  }

  // -----------------------------

  float arr[5]= {12.5,10.0,13.5,90.5,0.5};
  float* ptr1= &arr[0];
  float* ptr2= ptr1+3;
  cout<<*ptr2<<" ";  //90.5
  cout<<ptr2- ptr1;  //3  (pointer arithematic)
  cout<<endl;

  // ------------------------------

  int a=10;
  changeSign(&a);
  cout<<a<<endl;

  int b[]= {1,2,3,4};
  fun(b+1);
  cout<<b[0]<<endl;

  // ------------------------

  int x= 10;
  square(&x);
  cout<<x<<endl;

  return 0;
}