#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;

int main(){

// LINEAR SEARCH IN 2D ARRAY

  int arr[3][4]={
    {10,20,30,40},
    {15,25,35,45},
    {27,29,37,48}
  };

    int row=3;
  int col=4;
  int search;
  cout<< "enter the element to be searched: "<< endl;
  cin>> search;

  for(int i=0; i< row; i++){
    for(int j=0; j< col; j++){
      if( arr[i][j]== search){
        cout<< "element found at index: "<< i<< ","<< j<< endl;       
       
      }
    }
  }

  return 0;
}