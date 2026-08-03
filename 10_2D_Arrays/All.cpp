#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;


int findMax(int arr[][4], int row, int col ){
  int max= INT_MIN;

  for(int i=0; i<row; i++){
    for(int j=0; j< col; j++){
      if(arr[i][j]> max){
        max= arr[i][j];
      }
    }
  }

  return max;

}

int findMin( int arr[][4], int row, int col){
  int min= INT_MAX;
  for(int i=0; i< row; i++){
    for(int j=0; j< col; j++){
      if(arr[i][j]< min){
        min= arr[i][j];
      }
    }
  }
  return min;
}

int transpose(int arr[][3], int row, int col){
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      if(i<j){
        swap( arr[i][j], arr[j][i]);
      }
    }
  }

  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      cout<< arr[i][j]<<" ";
    }
    cout<<endl;
  }

}

int main(){

  // // declaration of 2D array
  // int arr [3][3];

  // // initialisation the array
  // int brr[2][2]= {
  //   {1,2},
  //   {3,4}
  // };
  // ----------------------------------------------

  // ACCESSING ELEMENTS IN 2D ARRAY

  // int arr[3][3]={
  //   {1,2,3},
  //   {4,5,6},
  //   {7,8,9}
  // };

  // ROW WISE ACCESS
  // int row=3;
  // int col=3;

  // for(int i=0; i<row; i++){
  //   for(int j=0; j<col; j++){
  //     cout<<arr[i][j]<<" ";     
  //   }
  //   cout<<endl;
  // }
  // ----------------------------------------------

  // // column WISE ACCESS
  // int row=3;
  // int col=3;

  // for(int i=0; i<row; i++){
  //   for(int j=0; j<col; j++){
  //     cout<<arr[j][i]<<" ";     
  //   }
  //   cout<<endl;
  // }

  // ----------------------------------------------

  // TAKING INPUTS FOR 2D ARRAY ROW WISE

  // int row=3;
  // int col=3;
  // int arr[row][col];
  // cout<< "enter the elements of 2D array: "<< endl;
  // for (int i=0; i<row;i++){
  //   for(int j=0; j<col; j++){
  //     cin>>arr[i][j];
  //   }
  // }

  // // PRINTING THE 2D ARRAY ROW WISE
  // cout<< "the 2D array is: "<< endl;
  // for (int i=0; i<row;i++){
  //   for(int j=0; j<col; j++){
  //     cout<< arr[i][j]<< " ";
  //   }
  //   cout<< endl;
  // }

  // ----------------------------------------------

  // PROBLEMS ON 2D ARRAYS

  // print the sum of each row in a 2D array

  // int arr[5][4]={
  //   {1,2,3,4}, // 1st row
  //   {2,3,4,1},
  //   {5,6,1,3},
  //   {2,4,6,8},
  //   {1,9,9,6}
  // };

  // // printing sum of each row

  // int row=5;
  // int col=4;

  // for (int i=0; i<row; i++){
  //   int sum=0; 
  //   for(int j=0; j<col; j++){
  //     sum= sum+ arr[i][j];
  //   }
  //   cout<<sum<<endl;

  // }
  // // --------------------------------------------------------------

  // // print the sum of eachcolumn in a 2D array

  // int arr[5][4]={
  //   {1,2,3,4}, // 1st row
  //   {2,3,4,1},
  //   {5,6,1,3},
  //   {2,4,6,8},
  //   {1,9,9,6}
  // };

  // // printing sum of each column

  // int row=5;
  // int col=4;

  // for (int i=0; i<row; i++){
  //   int sum=0; 
  //   for(int j=0; j<col; j++){
  //     sum= sum+ arr[j][i];
  //   }
  //   cout<<sum<<" ";

  // }

  // --------------------------------------------------------------

  // LINEAR SEARCH IN 2D ARRAY

  // int arr[3][4]={
  //   {10,20,30,40},
  //   {15,25,35,45},
  //   {27,29,37,48}
  // };

  // int row=3;
  // int col=4;
  // int search;
  // cout<< "enter the element to be searched: "<< endl;
  // cin>> search;

  // for(int i=0; i< row; i++){
  //   for(int j=0; j< col; j++){
  //     if( arr[i][j]== search){
  //       cout<< "element found at index: "<< i<< ","<< j<< endl;       
       
  //     }
  //   }
  // }

  // ------------------------------------------------------------------

  // MAXIMUM AND MINIMUM IN A 2D ARRAY

  // int arr[3][4]={
  //   {10,20,90,40},
  //   {5,25,35,45},
  //   {27,29,37,48}
  // };

  // cout<< "maximum element in the array: "<< findMax(arr,3,4)<<endl;
  // cout<< "minimum element in the array: "<< findMin(arr,3,4)<<endl;

  // -----------------------------------------------------------------------

  // TRANSPOSE THE MATRIX

  // for square matrix(swaping)

  // int row=3;
  // int col=3;
  // int arr[3][3]={
  //   {1,2,3},
  //   {5,6,7},
  //   {9,10,11}
  // };

  // cout<<"original matrix:"<< endl;
  // for(int i=0; i<row; i++){
  //   for(int j=0; j<col; j++){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }
  
  // cout<<"Transpose of this matrix is: "<<endl;
  // transpose(arr,row,col);

  // ------------------------------------------------------------------

  // for all matrix

  // int row=3;
  // int col=4;
  // int arr[row][col]={
  //   {10,20,90,40},
  //   {5,25,35,45},
  //   {27,29,37,48}
  // };

  // cout<<"original matrix:"<<endl;

  // for(int i=0; i<row; i++){
  //   for(int j=0; j<col; j++){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }

  // int T_arr[col][row];

  // for(int i=0; i<row; i++){
  //   for(int j=0; j<col; j++){
  //     T_arr[j][i] =arr[i][j];
  //   }
  // }

  // cout<<"transpose of this matrix:"<<endl;

  // for(int i=0; i<col; i++){
  //   for(int j=0; j<row; j++){
  //     cout<<T_arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }

  // --------------------------------------------------------------------
  // ---------------------------------------------------------------------

  // VECTOR IN 2D ARRAY

  // // a vector od a vector of integer elements
  // // outer vector is arr and inner vector is the element of outer vector, and the integers are the element of inner vector.

  // vector<vector<int> > arr;

  // // creating some inner vectors
  // vector<int> a{1,2,3};
  // vector<int> b{4,5,6};
  // vector<int> c{7,8,9};

  // // pushing back the inner vector to the outer vectors

  // arr.push_back(a);
  // arr.push_back(b);
  // arr.push_back(c);

  // // printing the vector 2D array

  // for(int i=0; i<arr.size(); i++){
  //   for(int j=0; j< arr[i].size(); j++){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }

  // // ANOTHER WAY

  // int row=3;
  // int col=5;

  // vector<vector<int> > arr(row, vector<int>(col,0)); // 3 rows 5 columns initialised with 0

  // cout<< "original array"<<endl;
  // for(int i=0; i<row; i++){
  //   for(int j=0; j< col; j++){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }

  // // print value in 2nd row and 3rd column
  // cout<<"value at 2nd row and 3rd column: "<< arr[1][2]<<endl;

  // // take input in 3rd row and 5th column
  // cout<<"taking input"<<endl;
  // cin>> arr[2][4];

  // cout<<"after taking input"<<endl;
  // for(int i=0; i<row; i++){
  //   for(int j=0; j< col; j++){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }

  // // taking all the inputs
  
  // cout<<"enter all the values of this arr:"<<endl;
  // for(int i=0; i<row; i++){
  //   for(int j=0; j<col; j++){
  //     cin>>arr[i][j];
  //   }
  //   cout<< endl;
  // }

  // cout<<"after taking all the inputs the array is:"<< endl;
  // for(int i=0; i<row; i++){
  //   for(int j=0; j<col; j++){
  //     cout<< arr[i][j]<<" ";      
  //   }
  //   cout<<endl;
  // }

  // // printing column wise
  // cout<<"column wise array:"<< endl;
  // for(int i=0; i<col; i++){
  //   for(int j=0; j<row; j++){
  //     cout<< arr[j][i]<<" ";      
  //   }
  //   cout<<endl;
  // }






  return 0;
} 