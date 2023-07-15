#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
  list<const char *> li = {"aaa", "bbb", "ccc"};
  vector<string> v1;

  v1.assign(li.begin(), li.end());

  for (auto s : v1)
    cout << s << " ";
  cout << endl;

  return 0;
}