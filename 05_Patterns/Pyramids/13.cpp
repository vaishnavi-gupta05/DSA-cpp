#include <iostream>
using namespace std;  


int main() {

// numeric hollow inverted half pyramid
// output:
// enter n: 5
// 1 2 3 4 5 
// 2     5
// 3   5
// 4 5
// 5

int n;
cout<<"enter n: ";
cin>>n;
for(int row =1; row<=n; row++){
  for(int col=1; col<= n-row+1; col++){
    if(row==1){
      cout<<col<<" ";
    }
    else if(col==1){
      cout<< row<<" ";
    }
    else if (col==n-row+1){
      cout<< n<<" ";
    }
    else{ 
      cout<<"  ";
    }
  }
  cout<<endl;
}  

  return 0;
}