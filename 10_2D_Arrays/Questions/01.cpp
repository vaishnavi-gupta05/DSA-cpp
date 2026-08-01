#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;

// print the sum of each row in a 2D array

int main(){
  int row=5;
  int col=4;

  int arr[5][4]={
    {1,2,3,4}, // 1st row
    {2,3,4,1},
    {5,6,1,3},
    {2,4,6,8},
    {1,9,9,6}
  };


  for(int i=0; i<row; i++){
    int sum=0;
    for(int j=0; j<col; j++){
      sum= sum+arr[i][j];     
    }
    cout<<sum;
    cout<<endl;
  }

  return 0;
}