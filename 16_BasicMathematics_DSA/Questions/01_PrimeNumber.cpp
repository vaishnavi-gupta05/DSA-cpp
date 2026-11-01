#include <iostream>
#include <vector>
using namespace std;

int main(){

  // 1. PRIME NUMBERS-->>>

  // Method 1: Naive Approach-->>
  // Time complexity: O(n)

  int n;
  cout<<"Enter a number: ";
  cin>>n;

  if(n==1){
      cout<<n<<" is not a prime number."<<endl;    
    }
  if(n==2){
        cout<<n<<" is a prime number."<<endl;      
      }
  else{
    for(int i=2; i<n; i++){      
      if(n%i==0){
        cout<<n<<" is not a prime number."<<endl;
        break;
      }
      else{
        cout<<n<<" is a prime number."<<endl;
        break;
      }
    }  
  }

  // Method 2: Square Root Approach-->>
  // Time complexity: O(sqrt(n))

  if(n==1){
      cout<<n<<" is not a prime number."<<endl;    
    }
  if(n==2){
        cout<<n<<" is a prime number."<<endl;      
      }
  else{
    for(int i=2; i*i<n; i++){      
      if(n%i==0){
        cout<<n<<" is not a prime number."<<endl;
        break;
      }
      else{
        cout<<n<<" is a prime number."<<endl;
        break;
      }
    }  
  }

  // ---------------------------------------------

  // counting the number of prime numbers less than n-->>>
  // Sieve of Eratosthenes-->>
  // Time complexity: O(nlog(log(n)))

  if(n<=2){
      cout<<"Number of prime numbers less than "<<n<<" is: 0"<<endl;
  }
  
  vector<bool> prime(n, true);
  prime[0]=prime[1]=false;

  for(int i=2; i<n; i++){
      if(prime[i]){
          for(int j=i*2; j<n; j+=i){ 
              prime[j]=false;
          }
      }
  }
  
  int count =0;

  for(int i=2; i<n; i++){
      if(prime[i]){
          count++;
      }
  }

  cout<<"Number of prime numbers less than "<<n<<" is: "<<count<<endl;

  return 0;
}