#include <iostream>
using namespace std;  


int main() {
// output:
// enter n: 5
//         *
//       *   *
//     *       *
//   *           *
// * * * * * * * * *

  int n;
  cout<<"enter n:  ";
  cin>>n;

  for(int row=1; row<=n; row++){
    for(int col=1;col<=2*n-1; col++){
      if(row==n || col==n-(row-1) || col== n+(row-1)){
        cout<<"* ";
      }
      else{ cout<<"  ";}
    }cout<<endl;
  }

  return 0;
}