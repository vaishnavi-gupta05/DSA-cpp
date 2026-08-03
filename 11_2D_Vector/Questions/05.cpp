#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){

  // FACTORIAL OF LARGE NUMBER

  // creating array with vector

  vector<int> arr{1,2,3,4,5,6,7,8,9};

  int maxm= INT_MIN;
  for(int i=0; i< arr.size(); i++){
    if(arr[i]>maxm){
      maxm=arr[i];
    }
  }

  int factorial= 1;

  for(int i=1; i<=maxm; i++) {
    factorial= factorial*i;
  }
  cout<<factorial<<endl;


  return 0;
}