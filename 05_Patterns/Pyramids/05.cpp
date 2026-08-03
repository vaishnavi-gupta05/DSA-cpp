#include <iostream>
using namespace std;

int main() {

// Diamond

//     * 
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *


  int n;
  cout<<"enter n: ";
  cin>>n;
  for(int row=1; row<=n; row++){
      for(int space=1; space<=n-row; space++){
          cout<<" ";
      }
      for(int star=1; star>n-row, star<=row; star++){
          cout<<"* ";
      }
      cout<<endl;
  }
  for(int row2=1; row2<=n; row2++){
      for(int space2=1; space2<row2; space2++){
          cout<<" ";
      }
      for(int star2=1; star2 >=row2, star2<=n-row2+1; star2++){
          cout<<"* ";
      }
      cout<<endl;  
    }

  return 0;
}