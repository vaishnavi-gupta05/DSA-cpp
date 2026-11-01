#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){

  // count number of prime number upto N numbers
  int n;
  cout<<"n: ";
  cin>>n;
  vector<bool> isprime(n, true);
  isprime[0]=isprime[1]=false;

  for(int i=2; i*i<=n; i++){  //root n
    if(isprime[i]){
      for(int j=i*i ; i<n; j+=i){   //marking should be start by i*i and not i*2
        isprime[j]= false;
      }

    }
  }
  int count=0;

  for(int i=2; i<n; i++){
    if(isprime[i]){
      count++;
    }
  }

  cout<<"number of prime number: "<<count<<endl;

  







}
