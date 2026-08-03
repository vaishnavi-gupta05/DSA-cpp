#include <iostream>
using namespace std;


//LOOPS
// What are Loops in C++?
// Loops are used when you want to execute a block of code multiple times until a condition is met.
//  Instead of writing the same code again and again, you use loops

// while Loop in C++  --->>>
// Definition
// A while loop repeats a block of code as long as a condition is true.
// If the condition is false at the beginning, the loop never executes.

// Syntax
// while(condition) {
     // code to execute
// }

int main() {

//  //print number 1 TO 5

//  int count=1;
//  while (count<=5) {
//   cout<<count<<" ";
//   count++;

//  }
//  cout<<endl; //output--1 2 3 4 5

 //print number 1 TO n(input)
//  int n;
//  cout<<"enter a number for while loop:";
//  cin>>n;
//  int i=1;
//  while(i<=n) {
//   cout<<i<<" ";
//   i++;
//  }
//  cout<<endl; //output 1 2 3 4 5 for n=5

//  What is Camel Case?
// Camel Case is a naming convention where:
// The first word starts with a lowercase letter.
// Each subsequent word starts with a capital letter.
// No spaces or underscores are used.

// Examples of camelCase:
// firstName
// totalMarks
// calculateSum
// isStudentPresent


// for Loop in C++  --->>>
// Definition
// A for loop is used when you know in advance how many times you want to repeat a block of code.

// Syntax
// for(initialization; condition; update) {
       // code to execute
// }
// initialization → Runs once at the beginning (e.g., int i = 1;)
// condition → Checked before every iteration (loop runs only if true)
// update → Executes after each iteration (e.g., i++)


// // print number 1 to m by input
// int n;
// cout<<"enter number for for loop: ";
// cin>>n;

// for(int i=1;i<=n;i++){
//   cout<<i<<" ";
// }
// cout<<endl; //output 1 2 3 4 5 for m=5

// // print sum of n terms
// int N;
// int sum=0;
// cout<<"enter your number:";
// cin>>N;
// for (int i=1; i<=N; i++){
//   sum+=i;
// }
// cout<<sum<<endl; // 55 for N =10

// What is break?
// break is a control statement in C++.
// It is used to immediately exit a loop (for, while, do...while) or a switch statement.
// After break, control moves outside the loop/switch


// What are Keywords?
// Keywords are reserved words in C++ that have a special meaning.
// They cannot be used as identifiers (like variable names, function names, etc.).
// Example: int, while, class, return, break, operator.

// Key Points to Remember about keywords
// Keywords are case-sensitive (int is keyword, Int is not).
// Cannot be redefined (int int = 5; is invalid).
// Some are rarely used but important for advanced C++ (like mutable, explicit, namespace).


// // SUM OF ALL ODD NUMBER FROM 1 TO M
// int n;
// cout<<"ENTER NUMBER: ";
// cin>>n;
// int oddsum=0;
// for (int i=1; i<=n;i++){
//   if(i%2!=0){
//     oddsum+=i;
//   }
  
// }
// cout<<oddsum<<endl; //output 225 for M=30


// // SAME PROBLEM BY WHILE LOOP
// int n=30;
// int oddSum=0;
// int i=1;
// while(i<=n){
//   if(i%2!=0){
//     oddSum+=i;
//   }
//   i++;
// }
// cout<<oddSum<<endl; //output 225


// What is a Garbage Value?
// A garbage value is an unpredictable / random value stored in a variable that is declared but not initialized.
// It comes from whatever data was already present at that memory location.
// So, when you use an uninitialized local variable, you get this junk data instead of 0.



// do…while Loop  ---->>>>
// Definition
// A do…while loop is similar to a while loop, but with one big difference:
// In while, the condition is checked before the loop runs.
// In do…while, the condition is checked after the loop runs.
// This means the body of a do…while loop runs at least once, even if the condition is false.

// Syntax
// do {
//      code to execute
// } while(condition);

// Notice the semicolon (;) after while(condition) → it’s compulsory.


// // print number 1 to 5 using do while loop
// int n = 1;
//     do {
//         cout << n << " ";
//         n++;
//     } while(n <= 5);
//     cout<<endl; // output 1 2 3 4 5



// // check if a number is prime or not

// int number;
// cout<<"enter number: ";
// cin>>number;
// bool isPrime=true;
// for (int i=2; i<number; i++){
//   if(number%i==0){
//     isPrime=false;
//     break;
//   }
        
// }
// if(isPrime==false){
//     cout<<"non-prime";
//   }else {cout<<"prime\n";}
//   cout<<endl;  // output non-prime for 20 and prime for 13


  // NESTED LOOPS
  // // to print 5 stars in 5 lines
  // int lines;
  // for (
  //     lines = 1; lines <=5; lines++)
      
  // {
  //   cout<<"*****"<<endl;
  // }

  // // to print n(num_of_stars) number of stars in one line

  // int n;
  // cout<< "how many stars do you want: ";
  // cin >> n;

  // for(int line=1; line<=n; line++){
  //   cout<<"*";
  // }
  // cout<<endl;
  

  // // to print n number of stars in m lines

  // int n ,m ;
  // cout<<"enter number of stars(n): ";
  // cin>>n;
  // cout<<"enter number of lines(m): ";
  // cin>>m;
  // for(int i=1;i<=m;i++){
  //   for(int j=1;j<=n;j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;

  // }

  return 0;
}




