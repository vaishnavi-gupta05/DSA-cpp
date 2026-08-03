
#include <iostream>
using namespace std;  


int main() {

// output
// 1
// 121
// 12321
// 1234321

int n;
cout<<"enter n: ";
cin>>n;
for(int row=1; row<=n; row++){
  for(int col=1; col<=row; col++){
    cout<<col;
  }
  for(int col=row+1; col<=2*row-1; col++){
        cout<< 2*row-col;
  }
  cout<<endl; 
}

// mathod 2

for(int row=1; row<=n; row++){
  for(int col=1; col<=row; col++){
    cout<<col;
  }
  for(int col=row-1; col>=1; col--){
    cout<<col;
}
cout<<endl;
}


  return 0;
}
