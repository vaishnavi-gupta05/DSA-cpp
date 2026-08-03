#include <iostream>
using namespace std;


int main() {

// if -else condition staements

int n;  
cout<<"Enter a number: ";
cin>> n;
if (n%2==0) {
  cout<< "n is a even number " << endl;
} else { 
  cout<< "n is a odd number" << endl;
}  //Braces {} are optional if only one statement follows. But always use braces for clarity.

int age;
cout<< "Enter your age: ";
cin >> age;

if ( age>=18) {
  cout<<"you can vote\n";
} else {
  cout<< "you can not vote\n";
}


//else if 

int marks;
cout<<"Enter your marks kid: ";
cin>> marks;

if (marks>90) {
  cout<<"Grade A\n";
} else if ((80<marks)&&(marks<=90)) {
  cout<<"Grade B\n";
} else if ((70<marks)&&(marks<=80)) {
  cout<<"Grade C\n";
}else if ((55<marks)&&(marks<=70)) {
  cout<<"Grade D\n";
} else if ((35<marks)&&(marks<=55)) {
  cout<< "need to works harder\n";
}else {
  cout<<"FAIL\n";
}
//Only one block of an if-else if ladder executes. Once a true condition is found, the rest are skipped.


char character;
cout<<"Enter a character: ";
cin>> character;

if ((character>='a')&&(character<='z')) {
  cout<<"character is in lowercase ";
}else if  ((character>='A')&&(character<='Z')) {
  cout<<"character is in uppercase \n";
}else {cout<<"it is not a character\n";
}


//comparison with ASCAII values of characters

char ch;
cout<<"Enter a character: ";
cin>> ch;

if ((ch>=65)&&(ch<=90)) {
  cout<<"character is in upercase ";
}else {cout<<"character is in lowercase\n";
 }
// it does not check for special characters.


//Ternary Operator in C++

// The ternary operator (?:) is a shorthand for simple if-else.

//  Syntax
// condition ? expression1 : expression2;

// If condition is true → expression1 executes.
// If condition is false → expression2 executes.


int x;
cout<<"Enter your number: ";
cin>>x;
cout<<( x>=0 ? "positive": "negative")<<endl;


return 0;
}