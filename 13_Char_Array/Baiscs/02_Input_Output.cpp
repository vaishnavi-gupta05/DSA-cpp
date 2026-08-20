#include <iostream>
using namespace std;

int main(){

  // Input / Output--->>

  char name[50];
  // Single word input (space pe ruk jata hai)
  cin >> name;
  cout<<name<<endl;

  cin.ignore();      // newline remove karega--> ignore() sirf 1 character remove karta hai.

  // line input (spaces ke saath)
  char name2[50];
  cin.getline(name2, 50);
  cout << name2;   // prints till '\0'


  // length -->>
  




  return 0 ;
}