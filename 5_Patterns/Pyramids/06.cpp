#include <iostream>
using namespace std;  

int main() {

// numeric half pyramid

// enter n: 5
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

  int n;
  cout<<"enter n: ";
  cin>> n;
  for(int row= 1; row<=n; row++){
    for( int col=1; col<= row; col++){
      cout<< col<< " ";
    }
    cout<<endl;
  }
  cout<<endl;


  return 0;
}