#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

  //BINARY SEARCHING USING STL--->>>>

  //IN ARRAYS--->>>>

  int arr[]={2,5,6,8,9,10,12};
  int size=7;
  int target=6;

  cout<<arr+size<<endl; //address of the last element
  cout<<arr<<endl; //address of the first element
  
  if(binary_search(arr, arr+size, target)){ //binary_search is a built in function in algorithm header file which returns true if the element is found in the array and false otherwise. It takes three arguments, the first two are the range of the array and the third is the target element.
    cout<<"Element found in the array."<<endl;
  }
  else{
    cout<<"Element not found in the array."<<endl;
  }

  // --------------

  //IN VECTORS--->>>>

  vector<int> v={2,5,6,8,9,10,12};
  int t=6;
  if(binary_search(v.begin(), v.end(), t)){ //binary_search can also be used with vectors. It takes three arguments, the first two are the range of the vector and the third is the target element.
    cout<<"Element found in the vector."<<endl;
  }
  else{
    cout<<"Element not found in the vector."<<endl;
  }

  auto a= v.begin(); //auto is a keyword in C++ which is used to declare a variable whose type is deduced from the initializer. In this case, a is an iterator which points to the first element of the vector v.
 
  cout<<*a<<endl; //dereferencing the iterator to get the value of the first element of the vector v....
  // "Dereferencing" means accessing the value stored at a memory address using *.
  

  return 0;
}