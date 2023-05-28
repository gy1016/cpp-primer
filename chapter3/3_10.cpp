#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
  string s("Hello world!!!");
  string res;

  for(auto c : s){
    if(ispunct(c))
      continue;
    res += c;
  }  

  cout << res << endl;
  return 0;
}
