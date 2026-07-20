#include <iostream>
using namespace std;  


int main() {

// numeric hollow half pyramid
// output:
// enter n: 5
// 1
// 1 2
// 1   3
// 1     4
// 1 2 3 4 5

int n;
cout<<" enter n: ";
cin>>n;
for (int row=1; row<=n; row++){
  for(int col=1; col<=row; col++){
    if( row==n || col==1 || col== row){
      cout<< col<< " ";
    }
    else{ cout<<"  ";}
  }
  cout<<endl;
}


  return 0;
}