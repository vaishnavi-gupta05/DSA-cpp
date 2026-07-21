#include <iostream>
using namespace std;

// WRITE A FUNCTION TO FIND THE MAXIMUM OF THREE NUMBERS

int max( int x, int y, int z){
  if(x>y && x>z){
    return x;
  }
  else if(y>z){
    return y;
  }
  else{
    return z;
  }
}

int main(){
  int a,b,c;
  cout<<"enter the value of a: ";
  cin>>a;
  cout<<"enter the value of b: ";
  cin>>b;
  cout<<"enter the value of c: ";
  cin>>c;

  int max_number= max(a,b,c);
  cout<<"maximum number is: "<< max_number <<endl;

  return 0;
}
