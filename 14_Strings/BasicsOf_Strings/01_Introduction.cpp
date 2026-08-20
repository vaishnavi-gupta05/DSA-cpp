#include <iostream>
#include<string>
using namespace std;

int main(){

  // What is a String?
  // A string is a sequence of characters.

  // declaration-->>
  string s1 = "hello";
  string s2("world");
  string s3(5, 'x');      // "xxxxx"
  string s4 = s1 + s2;    // concatenation directly (+ operator overload)

  // Input-->>
  string str;
  // cin>>str;  // stop at any space
  // cout<<str;

  getline(cin, str);
  cout<<str;

  // Unlike character arrays, strings automatically manage memory and provide many built-in functions.

  return 0;
}

