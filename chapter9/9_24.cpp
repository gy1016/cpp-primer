#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v1;

  cout << v1.at(0) << endl;
  cout << v1[0] << endl;
  cout << v1.front() << endl;
  cout << *v1.begin() << endl;

  return 0;
}