#include <iostream>
using namespace std;  


int main() {

// numeric palindromic diamond pattern
// output:
// *
// * 1 * 
// * 1 2 1 *
// * 1 2 3 2 1 *
// * 1 2 1 *
// * 1 *
// *

int n;
cout<<"enter n: ";
cin>>n;
for( int row=1; row<=n+1; row++){
  for(int col=1; col<=row; col++){
    if( col==1){
      cout<<"* ";
    }
    else{
      cout<<col-1<<" ";
    }
  }
  for(int col= row-2; col>=1; col--){
    cout<<col<<" ";
  }
  if(row==1){
  cout<<" ";
  }
  else{
    cout<<"* ";
  }
  cout<<endl;
}

for( int row= n; row>=1; row--){
  for(int col=1; col<=row; col++){
    if( col==1){
      cout<<"* ";
    }
    else{
      cout<<col-1<<" ";
    }
  }
  for(int col= row-2; col>=1; col--){
    cout<<col<<" ";
  }
  if(row==1){
  cout<<" ";
  }
  else{
    cout<<"* ";
  }
  cout<<endl;
}

return 0;

}