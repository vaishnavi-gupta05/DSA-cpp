#include <iostream>
#include <vector>
using namespace std;


vector<int> unionOfTwoArr(vector<int> v1, vector<int> v2){

  vector<int> unionArr;

  for(int j=0; j <v1.size(); j++){
    unionArr.push_back(v1[j]);     
  }
  for(int j=0; j <v2.size(); j++){
    unionArr.push_back(v2[j]);     
  }
  return unionArr;
}  
  

int printvector(vector<int> v){
  for(int i=0; i< v.size(); i++){
    cout<<v[i]<<" ";
  }
}


int main(){

  // UNION OF TWO ARRAYS

  vector<int> arr1{1,2,3,4,5};
  vector<int> arr2{6,7,8,9,10};

  vector<int> unionArr;

  unionArr= unionOfTwoArr(arr1, arr2);
  printvector(unionArr);

  return 0;
}