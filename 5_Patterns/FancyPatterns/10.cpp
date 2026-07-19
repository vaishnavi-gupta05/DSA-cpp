#include <iostream>
using namespace std;

int main() {

// output
// A
// AA1
// AAA21
// AAAA321
// AAAAA4321

int n;
char ch='A';
cout<<"enter n: ";
cin>>n;
for( int row=1; row<=n; row++){
  for ( int col=1; col<= row*2 -1; col++){
    if( col<= row){
      cout<< ch ;
    } else{
      cout<< 2*row - col;
    }
    
  }
  cout<<endl;
}  



  return 0;
}