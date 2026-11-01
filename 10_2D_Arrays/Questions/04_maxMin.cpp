#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main(){

// MAXIMUM AND MINIMUM IN A 2D ARRAY

  int arr[3][4]={
    {10,20,90,40},
    {5,25,35,45},
    {27,29,37,48}
  };

  int row=3;
  int col=4;

  int min= INT_MAX;
  int max= INT_MIN;
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      if(arr[i][j]<=min){
        min= arr[i][j];
      }
      if(arr[i][j]>=max){
        max= arr[i][j];
      }
    }
  }

    cout<<"min: "<<min<<endl;
    cout<<"max: "<<max<<endl;


  return 0;
}
