#include <iostream>
using namespace std;  


int main() {

//  numeric palindrome equilateral pyramid
//  enter n: 5
//         1 
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

int n;
cout<<" enter n: ";
cin>>n;
for(int row=1; row<=n; row++){
  // spaces
  for(int s=1; s<=n-row; s++){
    cout<<"  ";
  }
  // inceasing numbers
  for(int col=1; col<=row; col++){
    cout<<col<<" ";
  }
  // decreasing numbers
  for( int col= row-1; col>=1; col--){
    cout<<col<<" ";
  }
  cout<<endl;
}


  return 0;
}