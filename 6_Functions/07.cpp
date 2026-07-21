#include <iostream>
using namespace std;

// FUNCTION TO CALCULATE AREA OF CIRCLE

float AreaOfCrircle( float r){
  float area= 2*3.14*r*r;
  return area; 
}

int main(){
  float radius;
  cout<<" enter the radius of circle: ";
  cin>> radius;

  float area= AreaOfCrircle(radius);
  cout<<" The area of circle is: "<< area <<endl;
}