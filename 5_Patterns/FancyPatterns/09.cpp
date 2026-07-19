#include <iostream>
using namespace std;

int main() {
// output
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
// 5*5*5*5*5
// 4*4*4*4
// 3*3*3
// 2*2
// 1

  int n;
  cout<<"enter n: ";
  cin>>n;
  // Print the Upper Half (Increasing pattern)
  for( int row=1; row<=n; row++){
    for( int col=1; col<= row*2 -1; col++){
      if(col%2==0){
        cout<<"*"; // Even column → star
      } else{ cout<<row;} // Odd column ->print row number
    }
    cout<<endl; // Move to next line after each row
  }
  //Print the Lower Half (Decreasing pattern)

  for( int row2=1; row2<=n; row2++){
    for( int col2=1; col2<= (n-row2)*2 +1; col2++){
      if(col2%2==0){
        cout<<"*";
      } else{ cout<<n-row2+1;}
    }
    cout<<endl;
  }

  return 0;
}