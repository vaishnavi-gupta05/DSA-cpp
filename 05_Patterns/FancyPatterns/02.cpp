#include <iostream>
using namespace std;  


int main() {

// output
// ********1********
// *******2*2*******
// ******3*3*3******  
// *****4*4*4*4*****
// ****5*5*5*5*5****

int n;
cout<<"enter n: ";
cin>>n;
for(int row=1; row<=n; row++){
  // stars
  for(int s=1; s<2*n-row; s++){
    cout<<"* ";
  }
  // numbers and stars
  for( int col=1; col<=2*row -1; col++){
    if(col%2==0){
      cout<<"* ";
    }else{
      cout<<row<<" ";
    }
  }
  // stars
  for(int s=1; s<= 2*n- (row+1); s++){
    cout<<"* ";
}
  cout<<endl;
}

  return 0;
}