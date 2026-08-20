#include <iostream>
#include<string.h>
using namespace std;

int main(){

  // REVERSE THE STRING-->>

  char str[]= "hello";
  cout << "Original String: " << str << endl;

  int len= strlen(str);

  // printing reverse string->
  cout << "Reverse Print: ";
  for(int i=len-1; i>= 0; i--){
    cout<< str[i]<<" ";
  }
  cout<<endl;

  // reverse the string and print->
  for(int i=0,j=len-1; i<j ; i++, j--){
    swap(str[i], str[j]);
  }
  cout << "Reversed String: " << str << endl;

  return 0;
}