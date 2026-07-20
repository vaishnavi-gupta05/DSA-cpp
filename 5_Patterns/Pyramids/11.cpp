#include <iostream>
using namespace std;  


int main() {

// output:
// enter n: 5
// * * * * * 
// *     *
// *   *
// * *
// *     

  int n;
  cout<<"enter n: ";  
  cin>>n;
  for( int row=1; row<=n; row++){
    for( int col=n; col>=1; col--){
      if(row==1|| col==n|| col==row){
        cout<<"* ";
      }
      else { cout<<"  ";}
    }
    cout<<endl;  
  }
  
  return 0;
}