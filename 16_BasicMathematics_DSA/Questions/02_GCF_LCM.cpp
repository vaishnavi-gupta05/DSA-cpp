#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
  if(min(a,b)==0){
    return max(a,b);
  }
  return gcd(abs(a-b), min(a,b));
}

int main(){

   // GCD (Greatest Common Divisor) -->>

  int a=72, b=24;

  for(int i=min(a,b); i>1; i--){
    if(a%i==0 && b%i==0){
      cout<<"GCD of "<<a<<" and "<<b<<" is: "<<i<<endl;
      break;
    }
  }


  cout<<"GCD of "<<a<<" and "<<b<<" is: "<<gcd(a,b)<<endl;

  // lcm (Least Common Multiple) -->>
  // we know that a*b = gcd(a,b) * lcm(a,b)

  int lcm = (a*b)/gcd(a,b);
  cout<<"LCM of "<<a<<" and "<<b<<" is: "<<lcm<<endl;

  return 0;
}