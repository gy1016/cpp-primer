#include <iostream>
#include <string>
#include <vector>

int main()
{
  int n;
  std::vector<int> list;

  while(std::cin >> n)
    list.push_back(n);

  for(auto x : list){
    std::cout << x << std::endl;
  }
  return 0;
}
