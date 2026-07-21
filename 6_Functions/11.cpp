#include <iostream>
using namespace std;

// FUNCTION TO PRINT ALL PRIME NUMBERS FROM 1 TO N

bool isPrime(int n){  
  for(int i=2; i<n; i++){    
    if(n%i==0){
      return false;
    }
    else{
      return true;
    }   

  }
}

int primeNumbers(int n){
  for(int i=2; i<=n; i++){
    if(isPrime(i)==true){
      cout<< i << " ";
    }
  }
  
}


int main(){
  int n;
  cout<<"enter the value of n: ";
  cin>> n;

  cout<< "The list of prime numbers from 1 to "<< n<< " is: "<<endl;
  primeNumbers(n);
  return 0;
}

