#include <iostream>
using namespace std;

  // 1. What is Recursion?
  // A function that calls itself to solve a smaller instance of the same problem, until it reaches a base case that stops the calls.

  // Every recursive function needs:
  // Base case: the stopping condition (prevents infinite recursion)
  // Recursive case: the function calling itself with a smaller/simpler input that moves toward the base case

  // 2. How Recursion Works (Call Stack)
  // Each call is pushed onto the call stack with its own local variables. When the base case is hit, the stack starts "unwinding" — each call resumes and computes its result.


// HEAD AND TAIL RECURSION-->>

// TAIL RECURSION:
// The recursive call must be the very last statement, and its result must be returned directly — with no pending operation left after it.

// EXAMPLE:
void printReverseCounting(int n){

  // base condition
  if(n==0){
    return;
 
  }  
  cout<<n<<" ";
  printReverseCounting(n-1);  //This is tail recursion — after printReverseCounting(n-1) returns, the function has nothing else to do. It can just return immediately

}

// ------------------------

// HEAD RECRUSION:
// The recursive call happens first, and there's work pending after it returns.

// EXAMPLE:
void printCounting(int n){

  if(n==0){
    return;
  }
  printCounting(n-1); 
  cout<<n<<" ";  //This is head recursion — the cout statement is "waiting" for printCounting(n-1) to fully finish before it can execute.

}

// Any statement before the recursive call executes while the stack is building up (going from n toward 0).Any statement after the recursive call executes while the stack is unwinding (coming back from 0 toward n).

// -------------------


int factorial(int n){

  if(n==1|| n==0){
    return 1;
  } 
  return n * factorial(n-1);  
// This looks like the recursive call is "last," but it's NOT tail recursion — because there's pending work: the multiplication n * ... has to happen after factorial(n-1) returns. The call isn't the final operation — the multiply is.
// This is actually head recursion in disguise (work pending after the call), even though visually the call appears at the "end" of the line
}

// ---------------------------

int fib(int n){

  // base case
  if(n==1|| n==2){
    return n-1;
  }

  // processing
  return fib(n-1) + fib(n-2);
  // Time complexity: O(2^n) — exponential, due to repeated recomputation

}

int main(){

  int n;
  cout<<"Enter n: ";
  cin>>n;

  // Reverse counting-->>

  cout<<"Reverse counting from "<<n<<" to 1 is: ";
  printReverseCounting(n);
  cout<<endl;

  // Normal counting-->>

  cout<<"Normal counting from 1 to "<<n<<" is: ";
  printCounting(n);
  cout<<endl;


  // Factorial-->>

  cout<<"Factorial of "<<n<<" is: ";
  cout<<factorial(n);
  cout<<endl;

  // Fibonacci term-->>
  int i;
  cout<<"Enter which fibonacci term you want see: ";
  cin>>i;
  cout<<fib(i);
  cout<<endl;

  // fibonacci series print-->>

  cout<<"Fibonacci series till "<<n<<"th term: ";
  for(int i=1; i<=n; i++){
    cout<< fib(i)<<" ";
  }
  cout<<endl;



}