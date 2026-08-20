#include <iostream>
#include<string.h>
using namespace std;

int main(){

  // convert to uppercase-->>

  char str[]= "Dsa";
  int len= strlen(str);
  
  for(int i=0; i<len; i++){
    if(str[i] >= 'a' && str[i] <= 'z')
    str[i]= str[i]-32;
  }

  cout<<str<<endl;

  return 0;
}