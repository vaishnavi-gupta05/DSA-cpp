#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;


int main(){

  // SORT 0's , 1's and 2's IN AN 1-D ARRAY

  // vector<int> arr= {0,1,0,1,2,1,0,2,1,0,0,1,2,2};
  
  // for(int j= arr.size()-1 ; j>=0; j--){
  //   for(int i=0; i<j; i++){
  //     if(arr[i]> arr[j]){
  //       swap(arr[i], arr[j]);
  //       i--;
  //       }
  //     }
  //   }   

  //   cout<<"{ ";
  //   for(int i=0; i< arr.size(); i++){
  //     cout<< arr[i]<<" ";
  //   }
  //   cout<<"}";

    //--------------------------------------------------

  // MOVE ALL -VE NUMBERS TO ONE SIDE OF THE ARRAY
  // vector<int> arr= {1,-4,5,6,-8,-9,3,6,7,-2,-6};
  // int j= arr.size()-1;

  // for(int i=0; i<j; i++){
  //   if( arr[i]>0){
  //     swap( arr[i], arr[j]);
  //     j--;
  //     i--;
  //   }   
  // }

  // for(int i=0; i<arr.size(); i++){
  //   cout<< arr[i]<<" ";
  // }
  // ------------------------------------------------------------


  // FIND DUBLICATE ELEMENTS

  // vector<int> arr= {1,2,1,2,3,4,1,6,7,8,8,4,3};

  // for( int i=0; i< arr.size(); i++){
  //   for(int j=0; j< arr.size(); j++){
  //     if( i!=j && j>i && arr[i]==arr[j]){
  //       cout<<"("<< arr[i]<<","<< arr[j]<<")";
  //       break;
  //     }     
  //   }

  // }
  // cout<<endl;
  
  // ------------------------------------------------------

  // FIND MISSING NUMBER

  // ------------------------------------------------------  

  // FIND FIRST REPEATING ELEMENTS

  // --------------------------------------------------------

  // FIND COMMON ELEMENTS IN 3 ARRAYS

  // vector<int> arr1= {1,2,3,4,5,6,7,8,9};
  // vector<int> arr2= {4,5,2,9,10};
  // vector<int> arr3= {2,5,9,10,11,8};

  // for(int i=0; i< arr1.size(); i++){
  //   for(int j=0; j< arr2.size(); j++){
  //     for(int k=0;k< arr3.size(); k++){
  //       if( arr1[i]==arr2[j] && arr2[j]==arr3[k]){
  //         cout<< arr1[i]<<" ";
  //       }
  //     }
  //   }
  // }

  //----------------------------------------------------------------- 

  // // FACTORIAL OF LARGE NUMBER

  // // crating array
  
  // int arr_size;
  // cout<<"enter the size of array you want to create: "<<endl;
  // cin>>arr_size;
  // vector<int> arr(arr_size); 

  // // taking inputs int array
  // cout<<"enter the values of array: "<<endl;
  // for(int i=0; i< arr_size; i++){
  //   cin>>arr[i];
  // }

  // // printing the array we created
  // cout<<"original array: "<< endl;
  // for(int i=0; i<arr_size; i++){
  //   cout<< arr[i]<<" ";
  // }
  // cout<<endl;

  // // taking out maximum number int the array

  // cout<<"largest element in this array: "<<endl;
  // int maximum= INT_MIN;

  // for(int i=0; i< arr_size; i++){
  //   if (arr[i]> maximum){
  //     maximum = arr[i];
  //   }
  // }
  // cout<< maximum<< endl;

  // // factorial

  // int factorial=1;
  // for(int i=1; i<maximum; i++){
  //   factorial= factorial*i;
  // }
  
  // cout<< "factorial of "<< maximum<<" is: "<<factorial <<endl;

// --------------------------------------------------------------------

// SPIRAL PRINT OF A 2-D ARRAY

// --------------------------------------------------------------------

// WAVE PRINT OF A 2-D ARRAY

// --------------------------------------------------------------------

  return 0;
  
}