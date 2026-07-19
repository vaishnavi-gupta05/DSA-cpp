#include <iostream>
using namespace std;

int main() {
// output: 
// 1
// 22
// 333
// 4444
// 55555

  int n;
  cout<<"enter n: ";
  cin>>n; 
  for ( int row = 1; row<=n; row++){
    for ( int col= 1; col<= row; col++){
      cout<< row;
    }
    cout<<endl;
  }

  return 0;
}