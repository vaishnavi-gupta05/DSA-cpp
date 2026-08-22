#include <iostream>
using namespace std;


// pass by reference 
void update(int &x) {
  x = x + 10;
}

// pass by value
void passByValue_pointer(int* x){
  *x= *x+1;
}

void passByReference_pointer(int* &p){
  p= p+1;
}

int* solve(){
  int a=5;
  cout<<&"a"<<&a<<endl;
  int *ans= &a;

  cout<< ans;
}

int main() {

  int num = 5;

  update(num);
  cout << num<<endl; // 15

  passByValue_pointer(&num);  //&num is a pointer pointing num
  cout<<"After modification by passing pointer: "<<num<<endl;

  // in a function (int* x) goes as pass by value that means a copy is created and function is applied on the copy that is why we were not able to modify pointer in main by using functions
  // we can use pass by reference to modify the pointer on main by functions

  // pass by reference the pointer-->>

  int*p = &num;
  cout<<"Before p: "<<p<<endl;
  passByReference_pointer(p);
  cout<<"After p: "<<p<<endl;

  // --------------

  solve();
  


  

} 