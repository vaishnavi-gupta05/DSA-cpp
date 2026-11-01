#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){

  // FIND THE SQUARE ROOT (WITH PRECISIONS) USING BINARY SEARCH--->>>>>>>

  cout<<"Enter a number to find its square root: ";
  long double n;
  cin>>n;
  
  long long start=0;
  long long end= n;
  long double result =0;

  while (end>=start){
    long long mid= start+(end-start)/2;
    
    if(mid<=n/mid){
      result= mid;
      start= mid+1;
    }
    else{
      end=mid-1;
    }

  }

  long double step=0.1;
  int precision;
  cout<<"Enter the precision value:(eg. 1,2,3 etc): ";
  cin>>precision;

  for(int i=0; i<precision; i++){
    while((result+step)*(result+step)<=n){
      result+=step;
    }

    step/= 10;
  }

  cout<<fixed << setprecision(precision);
  cout<<"Square root of "<<n<<" is: "<<result;


  
  // Important Concept in C++ for controlling the number of decimal places in the output:
  // setprecision(n) → controls total digits
  // fixed + setprecision(n) → controls decimal places

  return 0;
}