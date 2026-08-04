#include <iostream>
#include <vector>
using namespace std;

int main(){

  // FIND THE SQUARE ROOT (INTEGER) USING BINARY SEARCH--->>>>>>

  cout<<"Enter a number to find its square root: ";
  int n;
  cin>>n;

  int start=0;
  int end=n/2;
  int ans;  

  while (end>=start){
    int mid= start+(end-start)/2;

    if(mid*mid<= n){
      ans= mid;
      start= mid+1;
    }
    else{
      end= mid-1;
    }

  }

  cout<<"square root of "<<n<<" is: "<<ans<<endl;


  return 0;
}