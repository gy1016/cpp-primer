#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> v1 = {1, 2, 3, 1, 1};

  cout << count(v1.cbegin(), v1.cend(), 1) << endl;

  return 0;
}