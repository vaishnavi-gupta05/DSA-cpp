#include <iostream>
using namespace std;

//  FUNCTION TO FIND FACTORIAL OF A NUMBER

int factorialOfNumber(int n){
  int factorial= 1;
  for( int i=1; i<=n; i++){
    factorial= factorial*i;
  }

  return factorial; 
}

int main(){
  int n;
  cout<<" enter the number: ";
  cin>>n;

  int factorial= factorialOfNumber(n);
  cout<<" The factorial of "<< n <<" is: "<< factorial <<endl;
}