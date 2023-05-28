#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string res;
  string word;
  while(cin >> word)
    res += word;

  cout << res << endl;  

  return 0;
}
