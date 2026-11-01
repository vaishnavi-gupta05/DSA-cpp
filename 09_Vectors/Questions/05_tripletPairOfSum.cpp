#include <iostream>
#include <vector>
using namespace std;

void tripletPair(vector<int> v, int sum){

  for(int i=0; i<v.size(); i++){
    for(int j=i+1; j<v.size(); j++){
      for(int k=j+1; k<v.size(); k++){
        if(v[i]+v[j]+v[k]==sum && i!=j!=k){
          cout<<"("<<v[i]<<","<<v[j]<<","<<v[k]<<")";
        }
      }   
    }
  }
}

int main(){
  vector<int> arr{1,2,3,4,5,6,7,8,9};
  int sum=12;
  
  tripletPair(arr,sum);

  return 0;
}