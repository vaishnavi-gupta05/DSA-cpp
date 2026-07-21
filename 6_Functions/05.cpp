#include <iostream>
using namespace std;

// FUNCTION OF STUDENT'S NUMBER AND GRADE SYSTEM

void grade(int x){
  if(x>=90){
    cout<<"A grade"<<endl;
  }
  else if(x>=80){
    cout<<"B grade"<<endl;
  }
  else if(x>=70){
    cout<<"C grade"<<endl;
  }
  else if(x>=60){
    cout<<"D grade"<<endl;
  }
  else if(x>=50){
    cout<<"E grade"<<endl;
  }
  else{
    cout<<"F grade"<<endl;
  } 

}

int main(){
  int number;
  cout<<" enter your number: ";
  cin>>number;
  cout<<" your got: ";
  grade(number);

}