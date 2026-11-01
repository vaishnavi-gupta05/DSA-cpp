#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;


int main(){
  int row=5;
  int col=4;

// print the sum of eachcolumn in a 2D array

  int arr[5][4]={
    {1,2,3,4}, // 1st row
    {2,3,4,1},
    {5,6,1,3},
    {2,4,6,8},
    {1,9,9,6}
  };

  
  for(int i=0; i<col; i++){
    int sum=0;
    for(int j=0; j<row; j++){
      sum= sum+arr[j][i];     
    }
    cout<<sum;
    cout<<endl;
  }

  return 0;
}
