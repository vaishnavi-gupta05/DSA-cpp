#include <iostream>
using namespace std;  

int main() {

// Full Pyramid 

// enter n: 5
//     * 
//    * *
//   * * *
//  * * * *
// * * * * *

  int n;
  cout<<"enter n: ";
  cin>>n;
  for (int row= 1; row <=n; row++){
    for (int space=1; space <= n-row; space++){
      cout<<" ";      
    }
    for (int star= 1; star>n-row , star<=row; star++ ){
      cout<< "* ";}
      cout<<endl;
  }

  return 0;
}