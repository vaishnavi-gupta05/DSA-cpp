#include <iostream>
#include <vector> // include vector library
using namespace std;

// vector in C++ 
// dynamic array (can grow and shrink in size)

// function to find unique element in an array using XOR
int findUnique(vector<int>arr){
  int ans=0;
  for( int i=0; i<arr.size(); i++){
    ans = ans^ arr[i]; // XOR operation
  }
  return ans;
}
// ---------------------------------------------------

// function to find union of two arrays
vector<int> unionOfArray( vector<int>arr1, vector<int>arr2){
  vector<int>unionArr;

  // copy elements of arr1 to unionArr

  for(int i=0; i<arr1.size(); i++){
    unionArr.push_back(arr1[i]);
  }
  // copy elements of arr2 to unionArr
  for(int i=0; i< arr2.size(); i++){
    unionArr.push_back(arr2[i]);
  }

  return unionArr;
  
}
// ---------------------------------------------------

// function to find intersection of two arrays

vector<int> intersectionOfArrays(vector<int>arr1, vector<int>arr2){

  vector<int>intersectionArr;

  for(int i=0; i< arr1.size(); i++){
    for (int j=0; j< arr2.size(); j++){
      if(arr1[i]== arr2[j]){
        intersectionArr.push_back(arr1[i]);
        arr2[j]=-1;
        break;
      }
    }
    
    
  }
  return intersectionArr;
}
// ---------------------------------------------------

// function to find pairs with given sum in an array

int findpair(vector<int>arr, int sum){
  for(int i=0; i< arr.size(); i++){
    for(int j=i+1; j<arr.size();j++){
      if( arr[i]+arr[j]== sum && i!=j){
        cout<< "(" << arr[i]<< "," << arr[j]<< ")" << endl;
        
      }
    }
  }
}
// ---------------------------------------------------

// triplets with given sum in an array

int tripletPair(vector<int>arr, int sum){
  for(int i=0; i<arr.size(); i++){
    for(int j=i+1; j< arr.size(); j++){
      for(int k=j+1; k< arr.size(); k++){
        if( arr[i]+ arr[j]+ arr[k]== sum && i!=j && j!=k && i!=k){
          cout<< "(" << arr[i]<< "," << arr[j]<< "," << arr[k]<< ")" << endl;
        }
      }  
    }
  }
}


int main(){

  // // create vector
  // vector<int> v; // vector of integers

  // // add elements to the vector
  // v.push_back(10);
  // v.push_back(20);
  // v.push_back(30);
  // v.push_back(40);

  // //remove last element
  // v.pop_back();
  
  // // get the size of the vector
  // cout<<v.size()<<endl; // returns the size of the vector

  // cout<< sizeof(v)<<endl; // returns the size in bytes of the vector object which is 
  // cout<< sizeof(int)<<endl; // returns size of integer in bytes

  // cout<<v.capacity()<<endl; // returns the capacity of the vector which is by default '0'

  // // to find if the vector is empty
  // cout<< v.empty()<<endl; // returns true if vector is empty --'1' else returns false ie '0'

  // // print elements of vector
  // for (int i=0; i< v.size(); i++){
  //   cout<< v[i]<< " ";
  // }
  // cout<< endl;



  // // create vector with initial size

  // vector<int> v(3);
  // cout<< v.size()<<endl; // size is 3
  // v.push_back(15);
  // v.push_back(25);
  // v.push_back(35);
  // v.push_back(45);
  // // v now has 7 elements (3 default(0) + 4 added)
   
  // cout<< v.size()<<endl; // now size is 7

  // // print elements of vector
  // for (int i=0; i< v.size(); i++){
  //   cout<< v[i]<< " ";
  // }
  // cout<< endl;
  // // result is: 0 0 0 15 25 35 45

  // -----------------------------------------------------------

  // PROBLEM SOLVING

  // FIND UNIQUE ELEMENTS IN AN ARRAY
  // given array: 1,2,4,2,1,3,6,5,5,6,4
  // every elemet appears twice except one element
  // find that unique element

  // solution----------

  // create an vector with these elements
  // vector<int> arr{1,2,4,2,1,3,3,9,6,5,5,6,4};

  // // method 1: using nested loops (time complexity: O(n^2))
  // int count =0;
  // for (int i=0; i< arr.size(); i++){
  //   for(int j=0; j<arr.size(); j++){
  //     if (arr[i]==arr[j] && i!=j){
  //       count++;
  //     }  
  //   }
  //   if(count==0){
  //     cout<< arr[i];
  //   }
  //   count=0;
  // }
  // cout<< endl;

  // method 2 : XOR method (time complexity: O(n))
  // XOR of a number with itself is 0
  // XOR of a number with 0 is the number itself

  // vector<int> arr{1,2,4,2,1,3,3,9,6,5,5,6,4};

  // int uniquevalue = findUnique(arr);
  // cout<< uniquevalue << endl;

  //-----------------------------------------------------------
  
  // // UNION OF TWO ARRAYS

  // vector<int> arr1{1,2,3,4,5};
  // vector<int> arr2{6,7,8,9,10};
  // vector<int> unionArr;

  // unionArr= unionOfArray(arr1, arr2);

  // for (int i=0; i< unionArr.size(); i++){
  //   cout<< unionArr[i]<< " ";
  // }

  // ------------------------------------------------------------------

  // INTERSECTION OF TWO ARRAYS (#need changes)

  // vector<int>arr1{1,2,3,4,5,6};
  // vector<int>arr2{2,2,4,5,9,5};

  // vector<int>intersectionArr;
  // intersectionArr= intersectionOfArrays(arr1, arr2);

  // for(int i=0; i< intersectionArr.size();i++){
  //   cout<< intersectionArr[i]<< " ";
  // }
  
  // ---------------------------------------------------------

  // FIND THE PAIR WITH GIVEN SUM IN AN ARRAY

  // vector<int> arr{1,2,3,4,5,6,7,8,9};
  // int sum=9;
  // cout<< "the pairs with sum " << sum << " are: "<< endl;
  // findpair(arr,sum);
  
  // ---------------------------------------------------------

  // FIND THE TRIPLETS WITH GIVEN SUM IN AN ARRAY

  // vector<int> arr{1,2,3,4,5,6,7,8,9};
  // int sum=12;
  // cout<< "the triplets with sum " << sum << " are: "<< endl;
  // tripletPair(arr,sum);

  // ---------------------------------------------------------

  // SORT 0's AND 1's IN AN ARRAY
  
  // // method 1: using extra array
  // vector<int> arr{0,1,1,0,1,0,1,0,1};
  // vector<int>sortedArr;
  // for(int i=0; i<arr.size(); i++){
  //   if(arr[i]==0){
  //     sortedArr.push_back(0);
  //   }
  // }

  // for(int i=0; i<arr.size(); i++){
  //   if(arr[i]==1){
  //     sortedArr.push_back(1);
  //   }
  // }

  // for(int i=0; i<sortedArr.size(); i++){
  //   cout<< sortedArr[i]<< " ";
  // }
  // cout<< endl;

  // // method 2: two pointer approach
  // vector<int> arr{0,1,1,0,1,0,1,0,1};
  // int left=0;
  // int right= arr.size()-1;
  // for( int i=0; i< right; i++){
  //   if(arr[i]==0){
  //     swap( arr[i] , arr[left]);
  //     left++;
  //   }
  //   else{
  //     swap( arr[i], arr[right]);
  //     right--;   
  //     i--;  // decrement i to recheck the swapped element
  //   }
  // }

  // for(int i=0; i<arr.size(); i++){
  //   cout<< arr[i]<< " ";
  // }







  return 0;
}



