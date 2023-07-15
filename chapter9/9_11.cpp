#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v1;                       // v1为空
  vector<int> v2 = v1;                  // v2为空
  vector<int> v3(v2);                   // v3为空
  vector<int> v4(10);                   // 10个0
  vector<int> v5(10, 1);                // 10个1
  vector<int> v6{1, 2, 3};              // 1 2 3
  vector<int> v7 = {1, 2, 3};           // 1 2 3
  vector<int> v8(v7.begin(), v7.end()); // 1 2 3

  return 0;
}