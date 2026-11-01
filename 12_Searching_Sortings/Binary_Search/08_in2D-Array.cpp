#include <iostream>
#include <vector>
using namespace std;

int main(){
  // BINARY SEARCHING IN 2D ARRAY--->>>>

  // creating a 2D vector to represent the 2D array

  vector<vector<int> > matrix = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16}
  };

  int target;
  cout<<"Enter the target element to search in the 2D array: ";
  cin>>target;

  int rows= matrix.size();
  int cols= matrix[0].size();

  int start=0;
  int end= rows*cols-1;

  while(end>=start){
    int mid= start+ (end-start)/2;
    int i= mid/cols; //to get the row index of the mid element in the 2D array. We can divide the mid index by the number of columns to get the row index.
    int j= mid- (i*cols); //to get the column index of the mid element in the 2D array. We can subtract the number of elements in the rows before the mid row from the mid index to get the column index.

    if( matrix[i][j]== target){
      cout<< "Element found at index: ("<<i<<", "<<j<<")"<<endl;
      break;
    }
    else if( matrix[i][j]< target){
      start= mid+1;
    }
    else{
      end= mid-1;
    }
  }



  return 0;
}