#include <iostream>
#include <iterator>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
  list<int> l1 = {1, 2, 3, 4, 5, 6, 7, 8, 0};

  auto r_iter = find(l1.crbegin(), l1.crend(), 0);
  cout << *r_iter << endl;

  return 0;
}
