#include <iostream>
#include <cmath>
using namespace std;


// CONVERT DECIMAL TO BINARY
// bitwise operator

long long decimalToBinary(int n) {
  long long binary=0;
  long long place=1;
   for(int i=0; n>0; i++){
    int bit= n&1;
    binary= bit*place + binary;
    place= place*10;
    n= n >> 1;
   }
    return binary;
}

int main(){
  int n;
  cout<<"Enter a decimal number: ";
  cin>>n;
  cout<<"Binary equivalent of "<< n <<" is: ";
  cout<<decimalToBinary(n)<<endl;

  return 0;
}
 

  