#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){

  int l, r;
  cin>> l >> r;

  int limit= sqrt(r)+1;

  vector<bool> prime(limit, true);

  for(int i=2; i*i<=limit; i++){
    if(prime[i]){
      for(int j=i*i; j<=limit; j+=i){
        prime[j]=false;
      }
    }
  }

  vector<int> basePrime;
  for(int i=2; i<=limit; i++){
    if(prime[i]){
      basePrime.push_back(i);
    }
  }


  vector<bool> segment(r-l+1, true);

  if(l == 0){
      segment[0] = false;
      if(r >= 1){
          segment[1] = false;
      }
  }
  else if(l == 1){
      segment[0] = false;
  }

  for(int p: basePrime){

    int first_mul= (l/p)*p;
    if(first_mul<l){
      first_mul+=p;
    }

    int start= max(p*p, first_mul);

    for(int i= start; i<=r; i+=p){
      segment[i-l]= false;
    }

  }

  for(int i=0; i<segment.size(); i++){
    if(segment[i]){
      cout<<i+l<<" ";
    }

  }

  cout<<endl;

  return 0;
}
