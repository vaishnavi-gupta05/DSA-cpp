#include <iostream>
using namespace std;  


int main() {
  
  // // solid rectangle with l and w

  // int l, w;
  // cout<<" enter lenght:";
  // cin>>l;
  // cout<<" enter width:";
  // cin>>w;
  
  // for ( int i=1; i <= w; i++){
  //   for ( int j=1; j <= l; j++){
  //     cout<<"*  ";
  //   }
  //   cout<<endl;
  // }

  // ----------------------------------------------------------------

  // holow rectangle with row and col

  // int row, col;
  // cout<<" enter row:";
  // cin>>row;
  // cout<<" enter col:";
  // cin>>col;

  // for ( int i=1; i<= row ;i++){
  //   if (i==1 || i== row){
  //     for ( int j=1; j<= col; j++){
  //       cout<<"*  ";
  //     }
  //   }
  //   else{
  //     cout<<"*  ";
  //     for ( int j=2; j<= col-1; j++){
  //       cout<<"   ";
  //     }
  //     cout<<"*  ";
  //   }
  //   cout<<endl;
  // }
  
  // // ~~ method 2~~
  // for( int i=1; i<=row; i++){
  //   for(int j=1; j<=col; j++){
  //   if(i==1||i==row||j==1||j==col){
  //     cout<<"* ";
  //       } 
  //   else{
  //     cout<<"  ";
  //     }
  //   }
  //  cout<<endl;
  // }
  // ----------------------------------------------------------------

  // half pyramid

  // int n;
  // cout<<"enter n: ";
  // cin>>n;

  // for(int i=1; i<=n; i++){
  //   for(int j=1; j<=i; j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }
  // ----------------------------------------------------------------

  //inverted half pyramid

  // int n;
  // cout<<"enter n: ";
  // cin>>n;

  // for(int i=1; i<=n; i++){
  //   for(int j=1; j<=n-i+1; j++){
  //     cout<<"* ";      
  //   }
  //   cout<<endl;
  // }

  // ~ method 2 ~
  // int n;
  // cout<<"enter n: ";
  // cin>>n;

  // for(int i=n; i>=1; i--){
  //   for(int j=1; j<=i; j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // ----------------------------------------------------------------
 // numeric half pyramid
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

  // int n;
  // cout<<"enter n: ";
  // cin>>n;
  
  // for(int i=1; i<=n; i++){
  //   for( int j=1; j<=i; j++){
  //     cout<< j <<" ";
  //   }
  //   cout<<endl;
  // }

  // ------------------------------------------------------------------
  // inverted numeric half pyramid
// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1

  // int n;
  // cout<<"enter n: ";
  // cin>>n;

  // for(int i=1; i<=n; i++){
  //   for(int j=1; j<=n-i+1; j++){
  //     cout<<j<<" ";
  //   }
  //   cout<<endl;   
   
  // }


  // ------------------------------------------------------
// full pyramid
//    *
//   * *
//  * * *
// * * * *
  // int n;
  // cout<<"enter n: ";
  // cin>>n;
  
  // for(int i=1; i<=n; i++){
  //   for(int j=1; j<=n; j++){
  //     if(j<=n-i){
  //       cout<<" ";
  //     }
  //     else{
  //       cout<<"* ";
  //     }
  //   }
  //   cout<<endl;
  // }

// ---------------------------------------------------------------

// inverted full pyramid
// * * * * 
//  * * *
//   * *
//    *
  // int n;
  // cout<<"enter n: ";
  // cin>>n;
  // for (int i=1; i<=n; i++){
  //   for (int j=1; j<=n; j++){
  //     if(j<i){
  //       cout<<" ";
  //     }
  //     else{
  //       cout<<"* ";
  //     }
  //   }
  //   cout<<endl;
  // }

// --------------------------------------------------------

  // SOLID DIAMOND PATTERN
//     * 
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
  // int n;
  // cout<<"enter n: ";
  // cin>>n;
  // for(int i1=1; i1<=n; i1++){
  //     for(int j1=1; j1<=n; j1++){
  //       if(j1<=n-i1){
  //         cout<<" ";
  //       } else{
  //         cout<<"* ";
  //       }
  //     }
  //     cout<<endl;       
  // } 
  // for(int i2=1; i2<=n; i2++){
  //     for(int j2=1; j2<=n; j2++){
  //       if(j2<i2){
  //         cout<<" ";
  //       } else{
  //         cout<<"* ";
  //       }
  //     }
  //     cout<<endl;       
  // }     
  
  // -------------------------------------------------------------
  // hollow diamond pattern
//    *
//   * *
//  *   *
// *     *
// *     *
//  *   *
//   * *
  //  *
  // int n;
  // cout<<"enter n: ";
  // cin>> n;

  // for( int row1=1; row1<=n; row1++){
  //   for(int col1=1; col1<=2*n -1; col1++){
  //     if(col1==n+1-row1 || col1==n+row1-1){
  //       cout<<"* ";
  //     }else{
  //       cout<<"  ";
  //     }
  //   }cout<<endl;
  // }
  // for(int row2=1; row2<=n; row2++){
  //   for(int col2=1; col2<=2*n -1; col2++){
  //     if(col2==row2 || col2==2*n-row2){
  //       cout<<"* ";
  //     }else{
  //       cout<<"  ";
  //     }
  //   }cout<<endl;
  // }

// --------------------------------------------
// FLIPPED SOLID DIAMOND PATTERN
// int n;
// cout<<"enter n: ";
// cin>>n;
// for (int row1= 1; row1<=n ; row1++){
//   for( int col1=1; col1<=2*n-1; col1++){
//     if(col1>=n-row1+2 && col1<=n+ row1 -2){
//       cout<<" ";
//     }else{
//       cout<<"*";
//     }
    
//   } cout<<endl;
// }
// for (int row2= 1; row2<=n ; row2++){
//   for( int col2=1; col2<=2*n-1; col2++){
//     if(col2>=row2+1 && col2<=2*n-row2-1){
//       cout<<" ";
//     }else{
//       cout<<"*";
//     }
//  } cout<<endl;
// }
// -------------------------------------------------------

// output: 
// 1
// 22
// 333
// 4444
// 55555

// int n;
// cout<<"enter n: ";
// cin>>n;
// for(int i=1; i<=n; i++){
//   for(int j=1; j<=i; j++){
//     cout<<i;
//   }
//   cout<<endl;
// }
// ---------------------------

// output
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
// 5*5*5*5*5
// 4*4*4*4
// 3*3*3
// 2*2
// 1

// int n;
// cout<<"enter n: ";
// cin>>n;
// for(int i=1; i<=n; i++){
//   for(int j=1; j<=2*i-1; j++){
//     if(j%2==0){
//       cout<<"* ";
//     }else{
//       cout<<i<<" ";
//     }
//   }
//   cout<<endl;
 
// }
// for(int i=n-1; i>=1; i--){
//   for(int j=1; j<=2*i-1; j++){
//     if(j%2==0){
//       cout<<"* ";
//     }else{
//       cout<<i<<" ";
//     }
//   }
//   cout<<endl;

// }

// -------------------------------------------------------

// Palindromic Pattern

// output
// 1
// 121
// 12321
// 1234321

// int n;
// cout<<"enter n: ";
// cin>>n;
// for(int row=1; row<=n; row++){
//   for(int col=1; col<=row; col++){
//     cout<<col;
//   }
//   for(int col=row+1; col<=2*row-1; col++){
//         cout<< 2*row-col;
//   }
//   cout<<endl; 
// }

// mathod 2

// for(int row=1; row<=n; row++){
//   for(int col=1; col<=row; col++){
//     cout<<col;
//   }
//   for(int col=row-1; col>=1; col--){
//     cout<<col;
// }
// cout<<endl;
// }

// -------------------------------------------------------

// output
// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA

// cout<< int('A')<<endl; --65

// int n;
// char ch='A';  
// cout<<"enter n: ";
// cin>>n;
// for( int row=1; row<=n; row++){
//   for( int col=1; col<=row; col++){
//     cout<< char( ch + col -1);
//   }
//   for( int col=row-1; col>=1; col--){
//     cout<< char( ch + col -1);
//   }
//   cout<<endl;
// }

// -------------------------------------------------------

// more patterns(HOMEWORK)
// hollow square pattern
// output:
// enter n: 5
// * * * * *
// *       *
// *       *
// *       *
// * * * * *

// int n;
// cout<<"enter n: ";
// cin>>n;
// for( int row=1; row<=n; row++){
//   for( int col=1; col<=n; col++){
//     if(row==1 || row==n || col==1 || col==n){
//       cout<<"* ";
//     } else{
//       cout<<"  ";
//     }
//   }
//   cout<<endl; 
// }

// -------------------------------------------------------


// hollow inverted half pyramid
// output:
// enter n: 5
// * * * * * 
// *     *
// *   *
// * *
// *

int n;
cout<<"enter n: ";  
cin>>n;
for( int row=1; row<=n; row++){
  for( int col=n; col>=1; col--){
    if(row==1|| col==n|| col==row){
      cout<<"* ";
    }
    else { cout<<"  ";}
  }
  cout<<endl;  
}

// ------------------------------------------------------

// hollow full pyramid
// output:
// enter n: 5
//         *
//       *   *
//     *       *
//   *           *
// * * * * * * * * *

// int n;
// cout<<"enter n:  ";
// cin>>n;

// for(int row=1; row<=n; row++){
//   for(int col=1;col<=2*n-1; col++){
//     if(row==n || col==n-(row-1) || col== n+(row-1)){
//       cout<<"* ";
//     }
//     else{ cout<<"  ";}
//   }cout<<endl;
// }


// ---------------------------------------------------------

// numeric hollow half pyramid
// output:
// enter n: 5
// 1
// 1 2
// 1   3
// 1     4
// 1 2 3 4 5

// int n;
// cout<<" enter n: ";
// cin>>n;
// for (int row=1; row<=n; row++){
//   for(int col=1; col<=row; col++){
//     if( row==n || col==1 || col== row){
//       cout<< col<< " ";
//     }
//     else{ cout<<"  ";}
//   }
//   cout<<endl;
// }

// -------------------------------------------------

// numeric hollow inverted half pyramid
// output:
// enter n: 5
// 1 2 3 4 5 
// 2     5
// 3   5
// 4 5
// 5

// int n;
// cout<<"enter n: ";
// cin>>n;
// for(int row =1; row<=n; row++){
//   for(int col=1; col<= n-row+1; col++){
//     if(row==1){
//       cout<<col<<" ";
//     }
//     else if(col==1){
//       cout<< row<<" ";
//     }
//     else if (col==n-row+1){
//       cout<< n<<" ";
//     }
//     else{ 
//       cout<<"  ";
//     }
//   }
//   cout<<endl;
// }

// -------------------------------------------------

//  numeric palindrome equilateral pyramid
//  enter n: 5
//         1 
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

// int n;
// cout<<" enter n: ";
// cin>>n;
// for(int row=1; row<=n; row++){
//   // spaces
//   for(int s=1; s<=n-row; s++){
//     cout<<"  ";
//   }
//   // inceasing numbers
//   for(int col=1; col<=row; col++){
//     cout<<col<<" ";
//   }
//   // decreasing numbers
//   for( int col= row-1; col>=1; col--){
//     cout<<col<<" ";
//   }
//   cout<<endl;
// }

// -------------------------------------------------

// output
// ********1********
// *******2*2*******
// ******3*3*3******  
// *****4*4*4*4*****
// ****5*5*5*5*5****

// int n;
// cout<<"enter n: ";
// cin>>n;
// for(int row=1; row<=n; row++){
//   // stars
//   for(int s=1; s<2*n-row; s++){
//     cout<<"* ";
//   }
//   // numbers and stars
//   for( int col=1; col<=2*row -1; col++){
//     if(col%2==0){
//       cout<<"* ";
//     }else{
//       cout<<row<<" ";
//     }
//   }
//   // stars
//   for(int s=1; s<= 2*n- (row+1); s++){
//     cout<<"* ";
// }
//   cout<<endl;
// }

// -------------------------------------------------

// solid half diamond pattern
// output:
// enter n: 5
// *
// * *
// * * *
// * * * *
// * * * * *

// int n;
// cout<<"enter n: ";
// cin>>n;
// // upper half
// for( int row=1; row<=n; row++){
//   for(int col=1; col<=row; col++){
//     cout<<"* ";
//   }cout<<endl;
// }
// // lower half
// for(int row= n-1; row>=1; row--){
//   for (int col=1; col<=row; col++){
//     cout<<"* ";
//   }cout<<endl;
// }

// -------------------------------------------------

// numeric palindromic diamond pattern
// output:
// *
// * 1 * 
// * 1 2 1 *
// * 1 2 3 2 1 *
// * 1 2 1 *
// * 1 *
// *

// int n;
// cout<<"enter n: ";
// cin>>n;
// for( int row=1; row<=n+1; row++){
//   for(int col=1; col<=row; col++){
//     if( col==1){
//       cout<<"* ";
//     }
//     else{
//       cout<<col-1<<" ";
//     }
//   }
//   for(int col= row-2; col>=1; col--){
//     cout<<col<<" ";
//   }
//   if(row==1){
//   cout<<" ";
//   }
//   else{
//     cout<<"* ";
//   }
//   cout<<endl;
// }

// for( int row= n; row>=1; row--){
//   for(int col=1; col<=row; col++){
//     if( col==1){
//       cout<<"* ";
//     }
//     else{
//       cout<<col-1<<" ";
//     }
//   }
//   for(int col= row-2; col>=1; col--){
//     cout<<col<<" ";
//   }
//   if(row==1){
//   cout<<" ";
//   }
//   else{
//     cout<<"* ";
//   }
//   cout<<endl;
// }

// -------------------------------------------------

// butterfly pattern
// output:
// enter n: 5
// *                 * 
// * *             * * 
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * * 
// * * * * * * * * * *
// * * * *     * * * *
// * * *         * * *
// * *             * * 
// *                 *

// int n;
// cout<<"enter n: ";
// cin>>n;
// // upper half
// for(int row=1; row<=n; row++){
//   for(int col=1; col<=2*n; col++){
//     if(col<=row|| col>2*n-row){
//       cout<<"* ";
//     } else{
//       cout<<"  ";
//     }
//   }
//   cout<<endl;
// }
// // lower half
// for(int row=n; row>=1; row--){
//   for(int col=1; col<=2*n; col++){
//     if(col<=row || col>2*n-row){
//       cout<<"* ";
//     } else{
//       cout<<"  ";
//     }
//   }
//   cout<<endl;
// }

// -------------------------------------------------

// floyd's triangle
// output:
// enter n: 7
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21
// 22 23 24 25 26 27 28

// int n;
// cout<<"enter n: ";
// cin>>n;
// int val=1;

// for(int row=1; row<=n; row++){
//   for (int col=1; col<=row; col++){
//     cout<<val<<" ";
//     val++;
//   }
//   cout<<endl;
// }

// -------------------------------------------------

// pascal's triangle (binomial coefficients)
// output:
// enter n: 5
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

// int n;
// cout<<"enter n: ";
// cin>>n;

// for( int i=0;i<n; i++){
//   int val=1;
//   for(int j=0; j<=i; j++){
//     cout<<val<<" ";
//     val= val*(i-j)/(j+1);
//   }
//   cout<<endl;
// }

// -------------------------------------------------

// numeric full pyramid
// output:
// enter n: 5
//     1
//    232
//   34543
//  4567654
// 567898765

// int n;
// cout<<"enter n: ";
// cin>>n;
// for (int row=1; row<=n; row++){
//   // spaces
//   for(int s=1; s<=n-row; s++){
//     cout<<" ";
//   }
//   // increasing numbers
//   for(int col=row; col<=2*row-1; col++){
//     cout<<col;
//   }
//   // decreasing numbers
//   for(int col=2*row-2; col>=row; col--){
//     cout<<col;
//   }
//   cout<<endl;
// }
// -------------------------------------------------

// numeric hollow pyramid
// output:
// enter n: 5
//     1
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5

// int n;
// cout<<"enter n: ";
// cin>>n;
// for( int row=1; row<=n; row++){
//   // starting spaces
//   for(int s=1; s<=n-row; s++){
//     cout<<" ";
//   }
//   // numbers and spaces
//   for(int col=1; col<=row; col++){
//     if(col==1 || col==row || row==n){
//       cout<<col<<" ";
//     } else{
//       cout<<"  ";
//     }
//   }
//   cout<<endl;
// }





 return 0;
}
