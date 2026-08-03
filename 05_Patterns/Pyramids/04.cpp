#include <iostream>
using namespace std;  

int main() {

// Invertd Pyramid

// enter n: 5
// * * * * * 
//  * * * *
//   * * *
//    * *
//     *

  int n;
  cout<< "enter n: ";
  cin>> n;
  for (int row=1; row <=n; row ++){
    for ( int space=1; space<row; space++){
      cout<<" ";
    }
    for (int star= 1; star>=row, star <= n-row+1; star ++){
      cout<<"* ";
    }
   cout<<endl;

  }

  return 0;
}