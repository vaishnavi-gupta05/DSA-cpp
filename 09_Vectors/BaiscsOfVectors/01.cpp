#include <iostream>
#include <vector>
using namespace std;

// create vector

int main(){

  vector<int> v;

  // pushing elemets in vector
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);

  // remove last element
  v.pop_back();

  // size of the vector
  int size_v= v.size();
  cout<<size_v<<endl;

  // size in bytes
  cout<< sizeof(v)<<endl;

  // capacity of vector
  cout<<v.capacity()<<endl;

  // to check if vector is empty or not
  cout<<v.empty()<<endl;   // returns true if vector is empty --'1' else returns false ie '0'

  // --------------------------------------------

  // // create vector with initial size
  vector<int> v2(3);
  cout<< v2.size()<<endl; // size is 3
  v2.push_back(15);
  v2.push_back(25);
  v2.push_back(35);
  v2.push_back(45);
  // v2 now has 7 elements (3 default(0) + 4 added)
  cout<<v2.size()<<endl;

  // --------------------------------------------

  // print elements of a vector
  for (int i=0; i<v2.size(); i++){
    cout<<v2[i]<<" ";
  }
  cout<<endl;
  // 0 0 0 15 25 35 45 

  // ----------------------------------------------

  



  return 0;
}

