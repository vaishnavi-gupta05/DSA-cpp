#include <iostream>
#include <vector>
using namespace std;

int main(){


  // FIND THE FIRST OCCURANCE OF AN ELEMENT IN A SORTED ARRAY--->>>>

  vector<int> v={2,5,6,8,12,12,12,12,12,12};
  int target=12;  

  int s=0;
  int e= v.size()-1;
  int ans;

  while(e>=s){

    int mid= s+(e-s)/2;

    if(v[mid]==target){
      ans= mid;
      e=mid-1;
    }

    else if(v[mid]<target){
      s=mid+1;
    }

    else{
      e= mid-1;
    }
  }

  cout<<"first occurance of "<<target<<" is: "<<ans<<endl;


  return 0;
}