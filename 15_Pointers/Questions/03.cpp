#include <iostream>
using namespace std;

int main(){

  char b[]= "xyz";
  char *c= &b[0];

  cout<<c<<endl;  //xyz

  // -------------------------

  char s[]= "hello";
  char* p= s;
  cout<<s[0]<<" "<< p[0]<<endl;  // h h

  // --------------------------

  char arr[20];
  int i;
  for(i=0; i<10;i++){
    *(arr+i)= 65+i;
  }
  *(arr+i)= '\0';
  cout<<arr<<endl;
  
  // --------------------------

  char *ptr;
  char str[]= "abcdefg";
  ptr= str;
  ptr+=5;
  cout<<ptr<<endl;  // fg

  // -------------------------

 


 return 0;

}