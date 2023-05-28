#include <iostream>
#include <vector>

void printVector(const std::vector<int>& v, int index)
{
  if(index < v.size())
  {
    std::cout << v[index] << " ";
    printVector(v, index + 1);
  }
}

int main()
{
  std::vector<int> v = {1, 2, 3, 4, 5};
  printVector(v, 0);
  return 0;
}