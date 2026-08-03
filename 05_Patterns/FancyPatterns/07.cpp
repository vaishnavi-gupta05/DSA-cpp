#include <iostream>
using namespace std;  


int main() {

// numeric full pyramid
// output:
// enter n: 5
//     1
//    232
//   34543
//  4567654
// 567898765

int n;
cout<<"enter n: ";
cin>>n;
for (int row=1; row<=n; row++){
  // spaces
  for(int s=1; s<=n-row; s++){
    cout<<" ";
  }
  // increasing numbers
  for(int col=row; col<=2*row-1; col++){
    cout<<col;
  }
  // decreasing numbers
  for(int col=2*row-2; col>=row; col--){
    cout<<col;
  }
  cout<<endl;
}

  return 0;
}