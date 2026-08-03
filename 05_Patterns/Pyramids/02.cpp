#include <iostream>
using namespace std;  

int main() {

//inverted half pyramid

// *  *  *  *  *  
// *  *  *  *
// *  *  *
// *  *
// *

  int n;
  cout<<"enter n: ";
  cin>>n;
  for( int row=n; row>0; row-- ){
    for (int col=row; col>0; col--){
      cout<<"*  ";
    } cout<<endl;
  }
  cout<<endl;

  // another way of inverted half pyramid

   int n;
   cout<<" enter n: ";
   cin>>n;
    for(int row=1; row<=n; row++){
      for(int col=1; col<=n-row+1; col++){
        cout<<"*  ";
      } cout<<endl;
    }
    cout<<endl;

  return 0;



}