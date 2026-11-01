#include <iostream>
using namespace std;

int main(){

  // Fast Exponentiation is used to calculate a^b in O(log b) time complexity.

  // Normal method to calculate a^b is O(b) time complexity.

  int digit, power;
  cin >> digit >> power;
  int answer = 1;

  for(int i=0; i<power; i++){
    answer *= digit;
  }
  cout << answer << endl;


  // Fast Exponentiation method

  int fastAnswer = 1;
  int base= digit;
  while(power>0){
    if(power % 2 == 1){ 
      fastAnswer *= base;
    }
    base *= base;
    power/=2;  // right shift in binary representation, dividing by 2 in decimal representation
  }
  cout << fastAnswer << endl;

  return 0;
}