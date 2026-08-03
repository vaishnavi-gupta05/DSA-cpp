#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){

  // WAVE PRINT OF A 2-D ARRAY

   int arr[4][4] = {
    {1,  2,  3,  4},
    {5,  6,  7,  8},
    {9, 10, 11, 12},
    {13,14,15,16}
  };

  int row=4;
  int col=4;
  int top= 0;
  int bottom=row-1;
  int left=0;
  int right= col-1;

  while(top<=bottom && left<=right){

    for(int i=top; i<= bottom; i++){
      cout<<arr[i][left]<<" ";
    }
    left++;

    for(int i=bottom; i>= top; i--){
      cout<<arr[i][left]<<" ";
    }
    left++;

    for(int i=top; i<= bottom; i++){
      cout<<arr[i][left]<<" ";
    }
    left++;

    for(int i=bottom; i>= top; i--){
      cout<<arr[i][left]<<" ";
    }
    left++;
   
  }

  cout<<endl;

// general solution  (better)

for(int j=0; j<col; j++){

  if(j%2==0){
    for(int i=0; i< row; i++){
      cout<<arr[i][j]<<" ";
    }
  }

  else{
    for(int i=row-1; i>= 0; i--){
      cout<<arr[i][j]<<" ";
    }
  }
}


  return 0;
}