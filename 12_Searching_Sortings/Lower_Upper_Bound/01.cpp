#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

  // inbuild functions to find the first and last occurrence of an element in a sorted array--->>>>

  vector<int> v={2,5,6,8,9,12,12,12,12,12};
  int target=12;

  auto it= lower_bound(v.begin(), v.end(), target); 
  //lower_bound is a built in function in algorithm header file which returns an iterator pointing to the first element in the range [first, last) which does not compare less than val. In other words, it returns an iterator pointing to the first occurrence of the target element in the vector.
  cout<<"First occurrence of target element is at index: "<<it-v.begin()<<endl;
   //to get the index of the first occurrence of the target element in the vector, we can subtract the iterator pointing to the first element of the vector from the iterator returned by lower_bound.

  auto it2= upper_bound(v.begin(), v.end(), target); 
  //upper_bound is a built in function in algorithm header file which returns an iterator pointing to the first element in the range [first, last) which compares greater than val. In other words, it returns an iterator pointing to the first element which is greater than the target element in the vector.
  cout<<"Last occurrence of target element is at index: "<<it2-v.begin()-1<<endl; 
  //to get the index of the last occurrence of the target element in the vector, we can subtract the iterator pointing to the first element of the vector from the iterator returned by upper_bound and then subtract 1 from it.

  // --------------------

  return 0;
}