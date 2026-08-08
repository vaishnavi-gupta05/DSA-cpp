#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

// TOTAL NUMBER OF OCCURANCE OF AN ELEMENT IN A SORTED ARRAY--->>>>

  vector<int> v={2,5,6,8,9,12,12,12,12,12};
  int target=12;  

  auto first_occurance= lower_bound(v.begin(), v.end(), target);
  auto last_occurance= upper_bound(v.begin(), v.end(), target);

  int total_occurance= last_occurance- first_occurance;

  cout<<total_occurance<<endl;
  

  return 0;
}


