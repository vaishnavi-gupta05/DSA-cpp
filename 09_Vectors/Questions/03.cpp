#include <iostream>
#include <vector>
using namespace std;


vector<int> intersectionOfArr(vector<int> v1, vector<int> v2){
  vector<int> arr;
  for(int i=0; i<v1.size(); i++){
    for (int j=0; j< v2.size(); j++){
      if (v1[i]==v2[j]){
        arr.push_back(v1[i]);
        v2[j]=-1;
        break;
      }
    }
  }
  return arr;
}

int printvector(vector<int> v){
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
  // INTERSECTION OF TWO ARRAYS (#need changes)

  int main(){
  vector<int>arr1{1,2,3,4,5,6};
  vector<int>arr2{2,2,4,5,9,5};

  vector<int> intersectionArr;
  intersectionArr= intersectionOfArr(arr1, arr2);
  printvector(intersectionArr);


  return 0;
  }
