#include <iostream>
#include <vector>
using namespace std;

int main(){

// FIND THE MISIING ELEMENT in sorted array using binary search--->>>>

  vector<int> v={1,2,3,4,6,7,8,9,10,11,12,13};
  int s=0;
  int e= v.size()-1;

  while(e>=s){
    int mid= s+(e-s)/2;

    if(v[mid]==mid+1){
      s=mid+1;
    }
    else{
      e=mid-1;
    }

  }

  cout<<"missing number is: "<<s+1<<endl;
  
  return 0;
}