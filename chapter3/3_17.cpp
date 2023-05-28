#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
  string word;
  vector<string> list;

  while(cin >> word)
    list.push_back(word);  

  for(auto &s : list){
    for(auto &c : s)
      c = toupper(c);
    cout << s << endl;
  }

  return 0;
}
