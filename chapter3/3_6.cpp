#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
  string s("hello word!");
  for(auto &c : s)
    c = 'X';
  cout << s << endl;  
  return 0;
}
