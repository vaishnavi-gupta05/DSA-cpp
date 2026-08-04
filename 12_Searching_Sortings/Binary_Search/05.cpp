#include <iostream>
#include <vector>
using namespace std;

int main(){

  // FIND PEAK ELEMENT IN MOUNTED ARRAY BY USING BINARY SEARCH--->>>>

  vector<int> v= {1,2,3,4,5,6,7,8,9,6,5,4,3,2,1};

  int s=0;
  int e= v.size()-1;

  while(e>=s){
    int mid= s+(e-s)/2;
    if(v[mid]>v[mid+1] && v[mid]>v[mid-1]){
      cout<<"peak element is: "<<v[mid]<<endl;
      break;
    }

    else if(v[mid]>v[mid+1]){
      e= mid-1;
    }
    else{
      s=mid+1;
    }

    // method 2-->>

  while(e>s){
    int mid= s+ (e-s)/2;

    if(v[mid]< v[mid+1]){
      s= mid+1;
    }
    else{
      e= mid;
    }
  }
  cout<<"Peak element is: "<<v[s]<<endl; //at the end of the loop, start and end will be pointing to the same element which is the peak element in the mounted array.

  }



}