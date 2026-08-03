#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){

// SPIRAL PRINT OF A 2-D ARRAY
int rows=4;
int cols=5;
int arr[rows][cols]={
  {1,2,3,4,5},
  {6,7,8,9,10},
  {11,12,13,14,15},
  {16,17,18,19,20}
};

// int arr{1, 2, 3, 4}

int top=0;
int bottom= rows-1;
int left=0;
int right= cols-1;


while(top <= bottom && left <= right){

  // Left -> Right
  for(int i = left; i <= right; i++){
      cout << arr[top][i] << " ";
  }
  top++;

  // Top -> Bottom
  for(int i = top; i <= bottom; i++){
      cout << arr[i][right] << " ";
  }
  right--;

  // Right -> Left
  if(top <= bottom){
      for(int i = right; i >= left; i--){
          cout << arr[bottom][i] << " ";
      }
      bottom--;
  }

  // Bottom -> Top
  if(left <= right){
      for(int i = bottom; i >= top; i--){
          cout << arr[i][left] << " ";
      }
      left++;
  }
}

// 1 2 3 4 5 10 15 20 19 18 17 16 11 6 7 8 9 14 13 12

  return 0;
}