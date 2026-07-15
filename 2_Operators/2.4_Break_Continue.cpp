#include <iostream>
 using namespace std;

int main() {

// BREAK
// its used to exit from the loop or switch case

 int a=5;
 for( int i=1; i<=5; i++){
  cout<<" Vaishnavi ";
 }
 cout<< "Gupta"<<endl;

for (int i=1; i<=5; i++){
  cout<<" Vaishnavi ";
   break;
}
cout<<" Gupta"<<endl;

// --------------------------------

// CONTINUE
// its used to skip the current iteration and move to the next iteration of the loop

  int a=5;
 for (int i=1; i<=5; i++){
  continue;
  cout<<" Vaishnavi ";
   
 }
  cout<<" Gupta"<<endl;

// --------------------------------

 int a=5;
 for (int i=1; i<=5; i++){
  if(i==3){ 
    // when i is 3, skip the iteration
    continue;
  }
  cout<<i<<endl;
 }

// --------------------------------

return 0;

}