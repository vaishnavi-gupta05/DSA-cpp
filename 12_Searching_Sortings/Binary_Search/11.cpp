#include <iostream>
#include <vector>
using namespace std;

int main(){

  // FIND THE ODD OCCURING ELEMENT (WHERE ALL OTHER ELEMENTS OCCUR EVEN NUMBER OF TIMES EXCEPT ONE) IN AN ARRAY USING BINARY SEARCH--->>>>>

  vector<int> arr={1,1,2,2,3,3,4,4,5,5,6,6,8};

  int s=0;
  int e= arr.size()-1;

  while(e>=s){

    if(e==s){
      cout<<arr[s];
      break;
    }

    int mid= s+(e-s)/2;

    if(mid%2==0){
      if(mid + 1 < arr.size() && arr[mid]==arr[mid+1]){
        s=mid+2;
      }
      else if(mid > 0 && arr[mid]==arr[mid-1]){
        e=mid-2;
      }
      else {
        cout<<arr[mid]<<endl;
        break;
      }
    }

    else{
      if(arr[mid]==arr[mid-1]){
        s=mid+1;
      }
      else if(mid + 1 < arr.size() && arr[mid]==arr[mid+1]){
        e=mid-1;
      }      
    }
  }


  return 0;
}