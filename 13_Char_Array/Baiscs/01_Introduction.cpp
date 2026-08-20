#include <iostream>
#include <string.h>
using namespace std;

int main(){

  // Character Array (Char Array)--->>>

  // Definition
  // A Character Array is an array of data type char that stores a sequence of characters. In C/C++, a character array is commonly used to store strings.

  // Declaration
  // Method 1: Character by Character

  char name[5] = {'H', 'e', 'l', 'l', 'o'};  //This is not a string because it does not contain the null character ('\0').-> riskyy!!
  cout<<name<<endl;
  

  char name2[6] = {'H', 'e', 'l', 'l', 'o'};
  cout<<name2<<endl;
  for(int i=0; i<6; i++){
    cout<<"index "<<i<<" "<<name2[i]<<endl;
  }


  // Method 2: Using String Literal

    char nameString[6] = "Hello";  // size 6 -> 5 chars + '\0'
    cout<<nameString<<endl;
    for(int i=0; i<6; i++){
      cout<<"index "<<i<<" "<<nameString[i]<<endl;
    }

  // Compiler automatically stores:
  // Index : 0   1   2   3   4   5
  // Value : H   e   l   l   o  '\0'


    char str[]= "My name is Vaishnavi";  // compiler auto size karega 
    cout<<str<<endl;

    char str2[10] = "hi";    // extra space khali/garbage ho sakta hai
    cout<<str2<<endl;
    cout<<str2[9];


  // Null Character ('\0')---->>
  // ASCII value = 0
  // Marks the end of a string.
  // Functions like cout, strlen(), strcmp() stop reading when they encounter '\0'.
  // example: H   i   '\0'

  // -------------------------------------------------

  // length--->>>>

  char str3[]= "hello world";
  int len=0;

  for(int i=0; str3[i]!='\0'; i++){
    len++;
  }

  cout<<"length of this string is: "<<len<<endl;

  // predefined function-->>

  cout<<strlen(str3)<<endl;




  return 0;
}