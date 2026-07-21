#include <iostream>
using namespace std;


// HOW TO MAKE FUnCTION

void printname(){
  int n; 
  cout<<"enter n: ";
  cin>>n;
  for(int i=0; i<=n; i++){
    cout<<" vaishnavi gupta"<<endl;
  }
}

// HOW TO CALL FUNCTION

// int main(){

// // printname();
// // printname();

//   return 0; 
// }

// ----------------------------------
 
// WRITE A FUNCTION TO ADD TWO NUMBERS

// int add(int a, int b){
//   int c= a+b;
//   return c;
// }

// int main(){ 
//   int a, b;
//   cout<<"enter the value of a: ";
//   cin>>a;
//   cout<<"enter the value of b: ";
//   cin>>b;
//   int sum= add(a,b);
//   cout<<"sum is: "<<sum <<endl;

//   return 0;
// }

// --------------------------------------------

// WRITE A FUNCTION TO FIND THE MAXIMUM OF THREE NUMBERS

// int max( int x, int y, int z){
//   if(x>y && x>z){
//     return x;
//   }
//   else if(y>z){
//     return y;
//   }
//   else{
//     return z;
//   }
// }

// int main(){
//   int a,b,c;
//   cout<<"enter the value of a: ";
//   cin>>a;
//   cout<<"enter the value of b: ";
//   cin>>b;
//   cout<<"enter the value of c: ";
//   cin>>c;

//   int max_number= max(a,b,c);
//   cout<<"maximum number is: "<< max_number <<endl;

//   return 0;
// }

// --------------------------------------------

// FUNCTION TO PRINT 1 TO N 

// void printcounting(int n){
//   for( int i=1; i<=n; i++){
//     cout<<i<<endl;
//   }
// }

// int main(){
//   int n;
//   cout<<" enter n: ";
//   cin>>n;

//  printcounting(n);
// }

// --------------------------------------------

// FUNCTION OF STUDENT'S NUMBER AND GRADE SYSTEM

// void grade(int x){
//   if(x>=90){
//     cout<<"A grade"<<endl;
//   }
//   else if(x>=80){
//     cout<<"B grade"<<endl;
//   }
//   else if(x>=70){
//     cout<<"C grade"<<endl;
//   }
//   else if(x>=60){
//     cout<<"D grade"<<endl;
//   }
//   else if(x>=50){
//     cout<<"E grade"<<endl;
//   }
//   else{
//     cout<<"F grade"<<endl;
//   } 

// }

// int main(){
//   int number;
//   cout<<" enter your number: ";
//   cin>>number;
//   cout<<" your got: ";
//   grade(number);

// }

// --------------------------------------------

// FUNCTION TO CALCULATE SUM OF EVEN NUMBER UNTO N

// int SumOfEvenNumber(int n){
//   int sum=0;
//   for(int i=1;i<=n; i++){
//     if(i%2==0){
//       sum = sum+i;
//     }
//  }
//   return sum;
// }

// int main(){
//   int n;
//   cout<< "enter the vaue of n: ";
//   cin>>n;

//   int result= SumOfEvenNumber(n);
//   cout<<" The sum of all the even numbers upto "<<n<<" is "<<result<<endl;

//   return 0;

// }

// --------------------------------------------

// FUNCTION TO CALCULATE AREA OF CIRCLE

// float AreaOfCrircle( float r){
//   float area= 2*3.14*r*r;
//   return area; 
// }

// int main(){
//   float radius;
//   cout<<" enter the radius of circle: ";
//   cin>> radius;

//   float area= AreaOfCrircle(radius);
//   cout<<" The area of circle is: "<< area <<endl;
// }

// --------------------------------------------

//  FUNCTION TO FIND IS EVEN OR ODD

// string OddEvenDetector (int n){
//   if (n%2==0){ 
//     string answer= "even";
//     return answer;
//   }
//   else{
//     string answer= "odd";
//     return answer;
//   }  
// }

// int main(){
//   int number;
//   cout<<" enter the number: ";
//   cin>>number;

//   string result= OddEvenDetector(number);
//   cout<<" The number is: "<< result <<endl;

// }

// --------------------------------------------

//  FUNCTION TO FIND FACTORIAL OF A NUMBER

// int factorialOfNumber(int n){
//   int factorial= 1;
//   for( int i=1; i<=n; i++){
//     factorial= factorial*i;
//   }

//   return factorial; 
// }

// int main(){
//   int n;
//   cout<<" enter the number: ";
//   cin>>n;

//   int factorial= factorialOfNumber(n);
//   cout<<" The factorial of "<< n <<" is: "<< factorial <<endl;
// }

// --------------------------------------------

// FUNCTION TO CHECK PRIME OR NOT

// string isPrime(int n){
//   if(n<=1){
//     return "not prime";
//   }
//   else if(n==2){
//     return "prime";
//   }
//   else{
//     for(int i=2; i<n; i++){
//       if(n%i==0){
//         return "is not prime";
//       }
//       else{
//         return "is prime";
//       }
//     }
//   }
  
// }

// int main(){
//   int n;
//   cout<<"enter the value of n: ";
//   cin>> n;

//   string result= isPrime(n);
//   cout<< "The number is : "<< result <<endl;

//   return 0;
// }

// --------------------------------------------

// FUNCTION TO PRINT ALL PRIME NUMBERS FROM 1 TO N

// bool isPrime(int n){  
//   for(int i=2; i<n; i++){    
//     if(n%i==0){
//       return false;
//     }
//     else{
//       return true;
//     }   

//   }
// }

// int primeNumbers(int n){
//   for(int i=2; i<=n; i++){
//     if(isPrime(i)==true){
//       cout<< i << " ";
//     }
//   }
  
// }


// int main(){
//   int n;
//   cout<<"enter the value of n: ";
//   cin>> n;

//   cout<< "The list of prime numbers from 1 to "<< n<< " is: "<<endl;
//   primeNumbers(n);
//   return 0;
// }


// --------------------------------------------

