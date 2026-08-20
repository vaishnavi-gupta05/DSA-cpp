#include <iostream>
#include<string.h>
using namespace std;

int main(){

  char str[]="racecar";
  int i=0;
  int j= strlen(str)-1;
  bool ispallindrome=true;

  while(i<j){
    if (str[i]!=str[j]){
      ispallindrome=false;
      break;
    }   
    i++;
    j--;
  }

  if(ispallindrome){
    cout<<"Yes it is a pallindrome"<<endl;
  }
  else{
    cout<<"Not a pallindrome"<<endl;
  }



  return 0;
}