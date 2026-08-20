#include <iostream>
#include<string.h>
using namespace std;

int main(){

  // TRANSVERSAL--->>>

  char str[]= "Hello";

  for(int i=0; str[i]!='\0'; i++){
    cout<<str[i]<<" ";
  }
  cout<<endl;

  cout<<strlen(str)<<endl; // 5

  // method 2:
  for (int i=0; i<strlen(str); i++){
    cout<< str[i]<<' ';
  }


  return 0;
}