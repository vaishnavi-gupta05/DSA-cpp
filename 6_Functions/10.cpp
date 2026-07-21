#include <iostream>
using namespace std;

//  FUNCTION TO CHECK PRIME OR NOT

string isPrime(int n){
  if(n<=1){
    return "not prime";
  }
  else if(n==2){
    return "prime";
  }
  else{
    for(int i=2; i<n; i++){
      if(n%i==0){
        return "is not prime";
      }
      else{
        return "is prime";
      }
    }
  }
  
}

int main(){
  int n;
  cout<<"enter the value of n: ";
  cin>> n;

  string result= isPrime(n);
  cout<< "The number is : "<< result <<endl;

  return 0;
}