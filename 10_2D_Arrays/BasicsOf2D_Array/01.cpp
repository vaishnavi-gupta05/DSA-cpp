#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;


int main(){

  // declaration of 2D array
  // int arr[3][3];

  // initialisation of 2D array
  int arr[3][3]= {
  {1,2,3},
  {4,5,6},
  {7,8,9}
  };

  // ACCESSING ELEMENTS IN 2D ARRAY
  cout<<arr[2][1]<<endl;

  // PRINT ALL ELEMENTS IN 2D ARRAY

  // 1. row wise
  // int row=3;
  // int col=3;
  // for(int i=0; i<row; i++){
  //   for(int j=0; j<col; j++){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }

  // 2. column vise
  // int row=3;
  // int col=3;
  // for(int i=0; i<col; i++){
  //   for(int j=0; j<row; j++){
  //     cout<<arr[j][i]<<" ";
  //   }
  //   cout<<endl;
  // }

  // -----------------------------------

  // TAKING INPUTS FOR 2D ARRAY ROW WISE

  // int row=3;
  // int col=3;
  // cout<< "enter elemets: "<<endl;

  // for(int i=0; i<row; i++){
  //   for(int j=0; j<col; j++){
  //     cin>>arr[i][j];
  //   }
  // }
  // for(int i=0; i<row; i++){
  //   for(int j=0; j<col; j++){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }

  // -------------------------------------

  


  return 0;
}