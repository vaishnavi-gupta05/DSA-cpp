#include <iostream>
using namespace std;  

int main() {

  // hollow rectangle with rows and colms

  int rows;
  int colms;
  cout<<"enter rows: ";
  cin>>rows;
  cout<<"enter columns: ";
  cin>>colms;
  for(int i=1;i<=rows;i++){
    if(i==1||i==rows){
      for(int j=1; j<=colms;j++){
        cout<<"*  ";
      }
    }else{
      cout<<"*  ";
      for(int j=2; j<=colms-1 ;j++){
        cout<<"   ";
      }
      cout<<"*  ";
    }
    cout<<endl;
  }

}