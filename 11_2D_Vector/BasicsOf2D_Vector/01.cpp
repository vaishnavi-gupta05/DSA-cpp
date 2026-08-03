#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;
 

int printArr(vector<vector<int>> arr){
    for(int i=0; i<arr.size(); i++){
    for(int j=0; j< arr[i].size(); j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  
}
 // VECTOR IN 2D ARRAY

  // a vector is a vector of integer elements
  // outer vector is arr and inner vector is the element of outer vector, and the integers are the element of inner vector.
int main(){

  vector<vector<int>> arr;  

// creating inner vectors
  vector<int> a{1,2,3};
  vector<int> b{4,5,6};
  vector<int> c{7,8,9};

// pushing back the inner vector to the outer vectors
  arr.push_back(a);
  arr.push_back(b);
  arr.push_back(c);

// print 2D vector
  printArr(arr);

// indexing---->
  cout<<arr[1][2]<<endl;

  // ANOTHER METHOD-->

  int rows=3;
  int cols=5;

  vector<vector<int>> arr2 (rows, vector<int>(cols,0));  //3 rows 5 columns initialised with 0

  printArr(arr2);

  // taking inputs->>
  cout<<"taking input"<<endl;
  cin>> arr2[2][4];
  
  cout<< arr2[2][4]<<endl; // verified


  // creating full 2D array with vector by taking inputs
  cout<<"enter: ";
  for(int i=0; i<arr2.size(); i++){
    for(int j=0; j<arr2[1].size(); j++){
      cin>>arr2[i][j];
      
    }
  }
  // print arr2
  printArr(arr2);





return 0;
}