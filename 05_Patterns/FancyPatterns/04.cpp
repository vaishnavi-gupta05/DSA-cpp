#include <iostream>
using namespace std;  


int main() {

// butterfly pattern
// output:
// enter n: 5
// *                 * 
// * *             * * 
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * * 
// * * * * * * * * * *
// * * * *     * * * *
// * * *         * * *
// * *             * * 
// *                 *

int n;
cout<<"enter n: ";
cin>>n;
// upper half
for(int row=1; row<=n; row++){
  for(int col=1; col<=2*n; col++){
    if(col<=row|| col>2*n-row){
      cout<<"* ";
    } else{
      cout<<"  ";
    }
  }
  cout<<endl;
}
// lower half
for(int row=n; row>=1; row--){
  for(int col=1; col<=2*n; col++){
    if(col<=row || col>2*n-row){
      cout<<"* ";
    } else{
      cout<<"  ";
    }
  }
  cout<<endl;
}


  return 0;
}