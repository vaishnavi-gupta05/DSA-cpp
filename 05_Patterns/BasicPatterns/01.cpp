#include <iostream>
using namespace std;  

int main() {

// solid rectangle with length and width

  int length;
  int width;
  cout<<"enter length: "; 
  cin>>length;
  cout<<"enter width: ";
  cin>>width;
  for(int i=1; i<=width;i++){
    for(int j=1; j<=length;j++){
      cout<<"*  ";
    }
    cout<<endl;
  }
  cout<<endl;

}