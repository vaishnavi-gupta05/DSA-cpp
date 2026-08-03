#include <iostream>
using namespace std;

// FUNCTION TO PRINT 1 TO N 

void printcounting(int n){
  for( int i=1; i<=n; i++){
    cout<<i<<endl;
  }
}

int main(){
  int n;
  cout<<" enter n: ";
  cin>>n;

 printcounting(n);

 return 0;
}