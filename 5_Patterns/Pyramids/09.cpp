#include <iostream>
using namespace std;

int main() {

// enter n: 5
// *********
// **** ****
// ***   ***
// **     **
// *       *
// *       *
// **     **
// ***   ***
// **** ****
// *********

  int n;
  cout<<"enter n: ";
  cin>>n;
  for( int row=1; row<=n; row++){
    for( int star=1; star<=2*n -1; star++){
      if(star> n-row+1 && star < n+row-1){
        cout<<" ";
      }else{ cout<<"*";}
      
    }
    cout<<endl;
  }
  for( int row2=1; row2<=n; row2++){
    for( int star2=1; star2<=2*n-1; star2++){
      if( star2> row2 && star2< 2*n- row2){
        cout<<" ";
      } else{ cout<<"*";}
    }
    cout<<endl;
  }


  return 0;
}