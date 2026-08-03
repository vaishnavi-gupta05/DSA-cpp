#include <iostream>
using namespace std;

//  FUNCTION TO FIND IS EVEN OR ODD

string OddEvenDetector (int n){
  if (n%2==0){ 
    string answer= "even";
    return answer;
  }
  else{
    string answer= "odd";
    return answer;
  }  
}

int main(){
  int number;
  cout<<" enter the number: ";
  cin>>number;

  string result= OddEvenDetector(number);
  cout<<" The number is: "<< result <<endl;

}