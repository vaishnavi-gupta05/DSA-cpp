#include <iostream>
#include<string.h>
using namespace std;

int main(){

  char str[]="my name is vaishnavi gupta";

  for(int i=0; i<strlen(str); i++){
    if(str[i]==' '){
      str[i]='@';
    }
  }

  cout<<str<<endl;


  return 0;
}