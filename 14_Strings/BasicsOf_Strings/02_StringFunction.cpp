#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

  string s= "Hello World";
  string compare= "my world";
  
  // length of string-->>
  cout<<"length is:"<<endl;
  cout<<s.size()<<endl;
  cout<< s.length()<<endl;

  // 	Index access-->>
  cout<<"indexing:"<<endl;
  cout<<s[2]<<endl;
  cout<<s.at(2)<<endl;

  // Substring-->>
  cout<<"Substring:"<<endl;
  cout<<s.substr(3,4)<<endl;  //  from index 3 and 4 ch

  // find-->>
  cout<<"Find: "<<endl;
  cout<< s.find("lo")<<endl;
  cout<<s.rfind("l")<<endl;

  // Append-->>
  cout<<"Append:"<<endl;
  s.append("!!");
  cout<<s<<endl;

  // Insert-->>>
  cout<<"Insert:"<<endl;
  s.insert(0,"cpp ");
  cout<<s<<endl;

  // Erase-->>
  cout<<"Erase:"<<endl;
  s.erase(0,4);  //erase from index 0 and 4 elements
  cout<<s<<endl;

  // replace-->>
  cout<<"replace:"<<endl;
  s.replace(0,4,"replace");
  cout<<s<<endl;

  // compare-->>>
  cout<<"compare:"<<endl;
  cout<<(s.compare(compare))<<endl;

  // pushback-->>>
  cout<<"pushback:"<<endl;
  s.push_back('p');
  cout<<s<<endl;

  // pop back-->>>
  cout<<"popback:"<<endl;
  s.pop_back();
  cout<<s<<endl;

  // empty--->>>
  cout<<"empty:"<<endl;
  cout<<s.empty()<<endl;
  
  // clear--->>>
  cout<<"clear:"<<endl;
  s.clear();
  cout<<s<<endl;

  // append again-->>
  cout<<"append:"<<endl;
  s.append("hello world.");
  cout<<s<<endl;

  // reverse-->>>
  cout<<"reverse:"<<endl;
  reverse(s.begin(), s.end());
  cout<<s<<endl;

  // sort-->>
  cout<<"sort:"<<endl;
  sort(s.begin(), s.end());
  cout<<s<<endl;

  // to_string-->>
  cout<<"to_string:"<<endl;
  string a= to_string(9);

  // 






  return 0;
}