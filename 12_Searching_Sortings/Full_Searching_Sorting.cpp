#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip> //for setprecision function to set the number of decimal places in the output.
using namespace std;

// BINARY SEARCHING--

int indexOftarget(int arr[], int size, int target){
  int start=0;
  int end= size-1;

  while(end>=start){
    int i= (start+end)/2;
    if(arr[i]==target){
      
      return i;
    }
    else if(arr[i]<target){
      start=i+1;
    }
    else{
      end=i-1;
    }
  }

  return -1;
}

int main(){
  
  // //BINARY SEARCHING--->>>>

  // int arr[]={2,5,6,8,9,10,12};
  // int size=7;
  // int target=6;

  // int result = indexOftarget(arr,size,target);
  // if(result==-1){
  //   cout<<"Element not found in the array."<<endl;
  // }
  // else{
  //   cout<<"Element found at index: "<<result<<endl;

  // }

  // -------------------------------------------------------

  // //BINARY SEARCHING USING STL--->>>>

  // //IN ARRAYS--->>>>

  // int arr[]={2,5,6,8,9,10,12};
  // int size=7;
  // int target=6;

  // cout<<arr+size<<endl; //address of the last element
  // cout<<arr<<endl; //address of the first element
  
  // if(binary_search(arr, arr+size, target)){ //binary_search is a built in function in algorithm header file which returns true if the element is found in the array and false otherwise. It takes three arguments, the first two are the range of the array and the third is the target element.
  //   cout<<"Element found in the array."<<endl;
  // }
  // else{
  //   cout<<"Element not found in the array."<<endl;
  // }
  
  // //IN VECTORS--->>>>

  // vector<int> v={2,5,6,8,9,10,12};
  // int target=6;
  // if(binary_search(v.begin(), v.end(), target)){ //binary_search can also be used with vectors. It takes three arguments, the first two are the range of the vector and the third is the target element.
  //   cout<<"Element found in the vector."<<endl;
  // }
  // else{
  //   cout<<"Element not found in the vector."<<endl;
  // }

  // auto a= v.begin(); //auto is a keyword in C++ which is used to declare a variable whose type is deduced from the initializer. In this case, a is an iterator which points to the first element of the vector v.
  // cout<<*a<<endl; //dereferencing the iterator to get the value of the first element of the vector v....
  // // "Dereferencing" means accessing the value stored at a memory address using *.

  // -------------------------------------------------------------------------------------------

  // FIND THE FIRST OCCURANCE OF AN ELEMENT IN A SORTED ARRAY--->>>>

  // vector<int> v={2,5,6,8,9,12,12,12,12,12};
  // int target=12;
  // int store;

  // int start=0;
  // int end=v.size()-1;

  // while(end>=start){
  //   int x= start+(end-start)/2; //to avoid overflow of start+end when the size of the array is very large. This is a common technique used in binary search to calculate the mid index.

  //   if(v[x]==target){
  //     store= x;
  //     end= x-1; //to continue searching in the left half of the array to find the first occurrence of the target element.
  //   }

  //   else if( v[x]> target){
  //     end= x-1;
  //   }
  //   else{
  //     start= x+1;

  //   }
    
  // }
  // cout<<"First occurrence of target element is at index: "<<store<<endl;
  // --------------------------------------------------------------------------------------------

  // FIND THE LAST OCCURANCE OF AN ELEMENT IN A SORTED ARRAY--->>>>

  // vector<int> v={2,5,6,8,9,12,12,12,12,12};
  // int target=12;
  // int store;
  // int start=0;
  // int end=v.size()-1;

  // while(end>= start){
  //   int x= start+ (end-start)/2;

  //   if(v[x]==target){
  //     store=x;
  //     start= x+1; //to continue searching in the right half of the array to find the last occurrence of the target element.  
  //   }

  //   else if(v[x]> target){
  //     end= x-1;
  //   }
  //   else{
  //     start= x+1;
  //   }
  // }
  // cout<<"Last occurrence of target element is at index: "<<store<<endl; 

  // --------------------------------------------------------------------------------------------

  // inbuild functions to find the first and last occurrence of an element in a sorted array--->>>>

  // vector<int> v={2,5,6,8,9,12,12,12,12,12};
  // int target=12;

  // auto it= lower_bound(v.begin(), v.end(), target); //lower_bound is a built in function in algorithm header file which returns an iterator pointing to the first element in the range [first, last) which does not compare less than val. In other words, it returns an iterator pointing to the first occurrence of the target element in the vector.
  // cout<<"First occurrence of target element is at index: "<<it-v.begin()<<endl; //to get the index of the first occurrence of the target element in the vector, we can subtract the iterator pointing to the first element of the vector from the iterator returned by lower_bound.

  // auto it2= upper_bound(v.begin(), v.end(), target); //upper_bound is a built in function in algorithm header file which returns an iterator pointing to the first element in the range [first, last) which compares greater than val. In other words, it returns an iterator pointing to the first element which is greater than the target element in the vector.
  // cout<<"Last occurrence of target element is at index: "<<it2-v.begin()-1<<endl; //to get the index of the last occurrence of the target element in the vector, we can subtract the iterator pointing to the first element of the vector from the iterator returned by upper_bound and then subtract 1 from it.

  // --------------------------------------------------------------------------------------------

  // TOTAL NUMBER OF OCCURANCE OF AN ELEMENT IN A SORTED ARRAY--->>>>

  // vector<int> v={2,5,6,8,9,12,12,12,12,12};
  // int target=12;

  // int count= upper_bound(v.begin(), v.end(), target)- lower_bound(v.begin(), v.end(), target); //to get the total number of occurrences of the target element in the vector, we can subtract the iterator returned by lower_bound from the iterator returned by upper_bound. This will give us the number of elements in the range [lower_bound, upper_bound) which are equal to the target element.
  // cout<<"Total number of occurrences of target element is: "<<count<<endl;

  // ---------------------------------------------------------------------------------------------

  // FIND THE MISIING ELEMENT in sorted array using binary search--->>>>

  // vector<int> v={1,2,3,4,6,7,8,9,10,11,12,13};

  // int start=0;
  // int end= v.size()-1;

  // while( start<= end){

  //   int mid= start+ (end-start)/2;
   
  //   if( v[mid]==mid+1){
  //     start= mid+1;
  //   }
  //   else{
  //     end= mid-1;
  //   }
 
  // }
  // cout<< start+1<<endl;

  // -----------------------------------------------------------------

  // FIND PEAK ELEMENT IN MOUNTED ARRAY BY USING BINARY SEARCH--->>>>

  // vector<int> v= {1,2,3,4,5,6,7,8,6,5,4,3,2,1};

  // int start=0;
  // int end= v.size()-1;

  // while(end>=start){
  //   int mid= start+ (end-start)/2;

  //   if( v[mid]> v[mid-1] && v[mid]> v[mid+1]){
  //     cout<<"Peak element is: "<<v[mid]<<endl;
  //     break;
  //   }
  //   else if(v[mid]< v[mid+1]){
  //     start= mid+1;
  //   }
  //   else{
  //     end= mid-1;
  //   }
  // }

  // -------------------

  // method 2 to find peak element in mounted array--->>>>(BEST)

  // vector<int> v= {1,2,3,4,5,6,7,8,6,5,4,3,2,1};
  // int start=0;
  // int end= v.size()-1;

  // while(end>start){
  //   int mid= start+ (end-start)/2;

  //   if(v[mid]< v[mid+1]){
  //     start= mid+1;
  //   }
  //   else{
  //     end= mid;
  //   }
  // }
  // cout<<"Peak element is: "<<v[start]<<endl; //at the end of the loop, start and end will be pointing to the same element which is the peak element in the mounted array.

  // ---------------------------------------------------------------------------------------------
  // ---------------------------------------------------------------------------------------------

  // FIND THE SQUARE ROOT (INTEGER) USING BINARY SEARCH--->>>>>>

  // cout<<"Enter a number to find its square root: ";
  // int n;
  // cin>>n;

  // int start=0;
  // int end=n;
  // int ans;

  // while(start<=end){
  //   int mid= start+ (end-start)/2;

  //   if(mid*mid<=n){
  //     ans= mid;
  //     start= mid+1;
  //   }
  //   else{
  //     end= mid-1;
  //   }
  // }
  // cout<<"Square root of "<<n<<" is: "<<ans<<endl;

  // FIND THE SQUARE ROOT (WITH PRECISIONS) USING BINARY SEARCH--->>>>>>>

  // cout<<"Enter a number to find its square root: ";
  // int n;
  // cin>>n;
  
  // float start=0;
  // float end= n;
  // float ans=0;

  // cout<<"Enter the precision for the square root: ";
  // float precision;
  // cin>>precision;
  
  // while(end-start>= precision){ //to continue the loop until the difference between end and start is greater than or equal to the precision value entered by the user. This will ensure that we get the square root of the number with the desired precision.
  //   float mid= start+ (end-start)/2;

  //   if(mid*mid<=n){
  //     ans= mid;
  //     start= mid;
  //   }
  //   else{
  //     end= mid;
  //   }
  // }

  // cout<<"Square root of "<<n<<" is: "<<ans<<endl;

  // --------------------------------------------------------------------------------------------- 

  // METHOD 2---->>> BEST

  // cout<<"Enter a number to find its square root: ";
  // long double n;
  // cin>>n;

  // long long start=0;
  // long long end=n;
  // long double ans;

  // while(start<=end){
  //  long long mid= start+ (end-start)/2;

  //   if(mid<= n/mid){ //can write mid<= n/mid instead of mid*mid<=n to avoid overflow when mid*mid is greater than the maximum value of int.
  //     ans= mid;
  //     start= mid+1;
  //   }
  //   else{
  //     end= mid-1;
  //   }
  // }
  
  // int precision;
  // cout<<"enter the precision value: ";
  // cin>> precision;

  // long double step=0.1;

  // for(int i=0; i<precision; i++){
  //   while((ans+step)*(ans+step) <= n){
  //       ans += step;
  //   }
    
  //   step /= 10;
  // }

  // cout<<fixed<<setprecision(precision);
  // cout<<"Square root of "<<n<<" is: "<<ans<<endl;

  // for(int i=0; i<precision; i++){
  //   for(long double j= ans; j*j<=n; j+=step){
  //     ans=j;
  //   }
  //   step/=10; 
  // }
  // cout<<fixed<<setprecision(precision);
  // cout<<"Square root of "<<n<<" is: "<<ans<<endl;

  // --------------------------------------------------------------

  // Important Concept in C++ for controlling the number of decimal places in the output:
  // setprecision(n) → controls total digits
  // fixed + setprecision(n) → controls decimal places

  // ---------------------------------------------------------------------------

  // BINARY SEARCHING IN 2D ARRAY--->>>>

  // creating a 2D vector to represent the 2D array

  // vector<vector<int> > matrix = {
  //   {1, 2, 3, 4},
  //   {5, 6, 7, 8},
  //   {9, 10, 11, 12},
  //   {13, 14, 15, 16}
  // };

  // int target;
  // cout<<"Enter the target element to search in the 2D array: ";
  // cin>>target;

  // int rows= matrix.size();
  // int cols= matrix[0].size();

  // int start=0;
  // int end= rows*cols-1;

  // while(end>=start){
  //   int mid= start+ (end-start)/2;
  //   int i= mid/cols; //to get the row index of the mid element in the 2D array. We can divide the mid index by the number of columns to get the row index.
  //   int j= mid- (i*cols); //to get the column index of the mid element in the 2D array. We can subtract the number of elements in the rows before the mid row from the mid index to get the column index.

  //   if( matrix[i][j]== target){
  //     cout<< "Element found at index: ("<<i<<", "<<j<<")"<<endl;
  //     break;
  //   }
  //   else if( matrix[i][j]< target){
  //     start= mid+1;
  //   }
  //   else{
  //     end= mid-1;
  //   }
  // }

  // ---------------------------------------------------------------------------------------------

  // SEARCH IN NEARLY SORTED ARRAY IN LOG TIME --->>>

  // vector<int> arr={10, 3, 40, 20, 50, 80, 70};
  // int target;
  // cout<<"Enter the target element to search in the nearly sorted array: ";
  // cin>>target;

  // int start=0;
  // int end= arr.size()-1;

  // while(start<=end){
  //   int mid= start+(end-start)/2;

  //   if(arr[mid]== target){
  //     cout<<"Element found at index: "<<mid<<endl;
  //     break;
  //   }
  //   else if(mid-1>=start && arr[mid-1]== target){ //to check if the target element is present at the index mid-1. We need to check if mid-1 is greater than or equal to start to avoid accessing an index out of bounds of the array.
  //     cout<<"Element found at index: "<<mid-1<<endl;
  //     break;
  //   }
  //   else if(mid+1<end && arr[mid+1]== target){ //to check if the target element is present at the index mid+1. We need to check if mid+1 is less than end to avoid accessing an index out of bounds of the array.
  //     cout<<"Element found at index: "<<mid+1<<endl;  
  //     break;
  //   }    
  //   else if(arr[mid]< target){
  //     cout<<"Element is greater than mid element, so searching in the right half of the array."<<endl;
  //     start= mid+2; //to skip the next element as it is already checked in the condition above.
  //   }
  //   else{
  //     cout<<"Element is smaller than mid element, so searching in the left half of the array."<<endl;
  //     end= mid-2; //to skip the previous element as it is already checked in the condition above.
       
  //   }
  // }

  // ---------------------------------------------------------------------------------------------

  // DIVIDE TWO INTEGERS USING BINARY SEARCH--->>>>>

  // long long dividend, divisor;
  // cout<<"Enter the dividend: ";
  // cin>>dividend;
  // cout<<"Enter the divisor: ";
  // cin>>divisor;

  // long long s=0;
  // long long e= abs(dividend); //to handle the case when the dividend is negative. We can take the absolute value of the dividend to get the correct quotient.
  // long long ans;

  // while( s<=e){
  //   long long mid= s+ (e-s)/2;

  //   if(mid*abs(divisor)>abs(dividend)){
  //     e=mid-1;
  //   }
  //   else{
  //     ans= mid;
  //     s= mid+1;

  //   }
  // }

  // if((dividend<0 && divisor>0) || (dividend>0 && divisor<0)){ //to handle the case when the dividend and divisor have different signs. In this case, the quotient will be negative, so we need to negate the answer to get the correct quotient.
  //   ans= -ans;
  // }
  // cout<<"quotient is: "<<ans<<endl; 

  // ---------------------------------------------------------------------------------------------

  // UPTO PRECISION DIVISION USING BINARY SEARCH--->>>>>

  // long long dividend, divisor;
  // cout<<"Enter the dividend: ";
  // cin>>dividend;
  // cout<<"Enter the divisor: ";
  // cin>>divisor;
  // int precision;
  // cout<<"Enter the precision: ";
  // cin>>precision;

  // if (divisor == 0) {
  //   cout << "Division by zero is not allowed!" << endl;    
  // }

  // long long s=0;
  // long long e= llabs(dividend); //to handle the case when the dividend is negative. We can take the absolute value of the dividend to get the correct quotient.
  // long double ans=0;

  // long long absDividend = llabs(dividend); //to handle the case when the dividend is negative. We can take the absolute value of the dividend to get the correct quotient.
  // long long absDivisor  = llabs(divisor);

  // while(s<=e){
  //   long long mid= s+ (e-s)/2;

  //   if(mid > absDividend/ absDivisor){
  //     e= mid-1;
  //   }
  //   else{
  //     ans= mid;
  //     s= mid+1;
  //   }
  // }

  // long double step=0.1;

  // for(int i=0; i< precision; i++){
  //   while((ans+step)<= ((long double)absDividend/absDivisor) + 1e-15){ //to avoid overflow when ans*absDivisor is greater than the maximum value of long long, we can write the condition as (ans+step)<= ((long double)absDividend/absDivisor) instead of (ans+step)*absDivisor <= absDividend. This will ensure that we do not get an overflow error when calculating the quotient with precision.
  //                         //long double is used to handle the case when the quotient is a decimal number. We can add a small value (1e-15) to the right side of the condition to handle the case when the quotient is very close to the actual value but due to precision issues, it may not be exactly equal to the actual value. This will ensure that we get the correct quotient with precision.
  //     ans+= step;
  //   }
  //   step/=10;
  // }

  // if((dividend<0 && divisor>0) || (dividend>0 && divisor<0)){ //to handle the case when the dividend and divisor have different signs. In this case, the quotient will be negative, so we need to negate the answer to get the correct quotient.
  //   ans= -ans;
  // }

  // cout<<fixed <<setprecision(precision);
  // cout<<"Quotient is: "<<ans<<endl;

  // ---------------------------------------------------------------------------------------------

  // FIND THE ODD OCCURING ELEMENT (WHERE ALL OTHER ELEMENTS OCCUR EVEN NUMBER OF TIMES EXCEPT ONE) IN AN ARRAY USING BINARY SEARCH--->>>>>

  // vector<int> arr={1,1,2,2,3,3,4,4,5,5,7,6,6};

  // int start=0;
  // int end= arr.size()-1;
  

  // while(end>=start){
  //   if(start==end){
  //     cout<<"The odd occurring element is: "<<arr[start]<<endl;
  //     break;
  //   }

  //   int mid= start+ (end-start)/2;
  //   if(mid%2==0){
  //     if(arr[mid]==arr[mid+1]){
  //       start= mid+1;
  //     }
  //     else if(arr[mid]== arr[mid-1]){
  //       end= mid-1;
  //     }
  //     else{
  //       cout<<"The odd occurring element is: "<<arr[mid]<<endl;
  //       break;
  //     }
  //   }
  //   else{
  //     if(arr[mid]== arr[mid+1]){
  //       end= mid-1;
  //     }
  //     else{
  //       start= mid+1;
        
  //     }    
  //   }
  // }

  // --------------------------------------------------------------------------------------------- 

  


   



  return 0;
} 