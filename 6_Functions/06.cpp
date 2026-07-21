#include <iostream>
using namespace std;


// FUNCTION TO CALCULATE SUM OF EVEN NUMBER UNTO N

int SumOfEvenNumber(int n){
  int sum=0;
  for(int i=1;i<=n; i++){
    if(i%2==0){
      sum = sum+i;
    }
 }
  return sum;
}

int main(){
  int n;
  cout<< "enter the vaue of n: ";
  cin>>n;

  int result= SumOfEvenNumber(n);
  cout<<" The sum of all the even numbers upto "<<n<<" is "<<result<<endl;

  return 0;

}