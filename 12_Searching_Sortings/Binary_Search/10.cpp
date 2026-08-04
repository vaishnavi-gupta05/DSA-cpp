#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){


  // UPTO PRECISION DIVISION USING BINARY SEARCH--->>>>>

  long long dividend, divisor;
  cout<<"Enter the dividend: ";
  cin>>dividend;
  cout<<"Enter the divisor: ";
  cin>>divisor;
  int precision;
  cout<<"Enter the precision: ";
  cin>>precision;

  if (divisor == 0) {
    cout << "Division by zero is not allowed!" << endl;
    return 0;
  }

  long long s=0;
  long long e= llabs(dividend); //to handle the case when the dividend is negative. We can take the absolute value of the dividend to get the correct quotient.
  long double ans=0;

  long long absDividend = llabs(dividend); //to handle the case when the dividend is negative. We can take the absolute value of the dividend to get the correct quotient.
  long long absDivisor  = llabs(divisor);

  while(s<=e){
    long long mid= s+ (e-s)/2;

    if(mid > absDividend/ absDivisor){
      e= mid-1;
    }
    else{
      ans= mid;
      s= mid+1;
    }
  }

  long double step=0.1;

  for(int i=0; i< precision; i++){
    while((ans+step)<= ((long double)absDividend/absDivisor) + 1e-15){ //to avoid overflow when ans*absDivisor is greater than the maximum value of long long, we can write the condition as (ans+step)<= ((long double)absDividend/absDivisor) instead of (ans+step)*absDivisor <= absDividend. This will ensure that we do not get an overflow error when calculating the quotient with precision.
    //long double is used to handle the case when the quotient is a decimal number. We can add a small value (1e-15) to the right side of the condition to handle the case when the quotient is very close to the actual value but due to precision issues, it may not be exactly equal to the actual value. This will ensure that we get the correct quotient with precision.
      ans+= step;
    }
    step/=10;
  }

  if((dividend<0 && divisor>0) || (dividend>0 && divisor<0)){ //to handle the case when the dividend and divisor have different signs. In this case, the quotient will be negative, so we need to negate the answer to get the correct quotient.
    ans= -ans;
  }

  cout<<fixed <<setprecision(precision);
  cout<<"Quotient is: "<<ans<<endl;

  
  return 0;
}