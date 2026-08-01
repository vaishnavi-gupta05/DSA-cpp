#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;

int main(){

  // TRANSPOSE THE MATRIX
  // for square matrix(swaping)

  int row=3;
  int col=3;
  int arr[3][3]={
    {1,2,3},
    {5,6,7},
    {9,10,11}
  };

  for(int i=0; i<row; i++){
    for(int j=i+1; j<col; j++){
      swap(arr[i][j],arr[j][i]);
    }
  }
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  cout<<endl;

  // all matrix

  int row2=3;
  int col2= 4;
  int arr2[3][4]={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
  };

  int T_arr[col2][row2];

  for(int i=0; i<col2; i++){
    for(int j=0; j<row2; j++){
      T_arr[i][j]=arr2[j][i];
    }
  }
  for(int i=0; i<col2; i++){
    for(int j=0; j<row2; j++){
      cout<<T_arr[i][j]<<" ";
    }
    cout<<endl;
  }

  cout<<endl;


  

  return 0;
}