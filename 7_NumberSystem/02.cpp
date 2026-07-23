#include <iostream>
#include <cmath>
using namespace std;

// CONVERT BINARY TO DECIMAL

int binaryToDecimal(long long n){
  int decimal=0;
  int place=1;

  for(int i=0; n>0; i++){
    int dec= n%10;
    decimal= dec* place +decimal;
    place= place*2;
    n = n/10;
  }
  
  return decimal;
}

int main(){
  int n;
  cout<<"Enter a binary number: ";
  cin>>n;
  cout<<"Decimal equivalent of "<< n <<" is: ";
  cout<<binaryToDecimal(n)<<endl;
  return 0;
}
