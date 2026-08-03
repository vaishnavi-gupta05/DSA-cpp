#include <iostream>
#include <vector>
using namespace std;

void pairofsum(vector<int>v, int sum){

  for(int i=0; i<v.size(); i++){
    for(int j=i+1; j<v.size(); j++){
      if(i!=j && v[i]+v[j]==sum){
        cout<<"("<<v[i]<<","<<v[j]<<")";
      }
    }
  }
}

int main(){

  vector<int> arr{1,2,3,4,5,6,7,8,9};
  int sum=9;

  pairofsum(arr, sum);

  return 0;
}