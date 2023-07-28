#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

list<string> &elimDups(list<string> &words)
{
  words.sort();
  words.unique();
  return words;
}

int main()
{
  list<string> vs = {"d", "c", "b", "a", "a", "c", "e"};

  for (const auto s : elimDups(vs))
    cout << s << " ";
  cout << endl;

  return 0;
}
