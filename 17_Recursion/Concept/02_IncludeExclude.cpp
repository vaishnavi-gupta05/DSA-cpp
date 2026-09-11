#include <iostream>
#include <vector>
using namespace std;

void printSubstr(string& str, string subStr,vector<string>& substring, int i=0){


  // base case
  if(i>=str.length()){
    cout<<subStr<<endl;
    substring.push_back(subStr);
    return;
  }

  // exclude
  printSubstr(str, subStr,substring, i+1);


  // include
  subStr.push_back(str[i]);
  printSubstr(str,subStr,substring, i+1);
  
  // subStr.pop_back(); 


}

// if we pass subStr by reference then we have to pop back at last to backtrack...subStr.pop_back();

int main(){

  string str= "abcd";
  string subStr;

  // to store in a vector->
  vector<string> substring;

  printSubstr(str, subStr, substring);
  
  // print vector->
  cout<<"{ ";
  for(int i=0; i<substring.size(); i++){
    cout<<substring[i]<<" ";
  }
  cout<<"}"<<endl;


  return 0;
}