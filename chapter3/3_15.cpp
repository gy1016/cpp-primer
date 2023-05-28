#include <iostream>
#include <string>
#include <vector>

int main()
{
  std::string word;
  std::vector<std::string> list;

  while(std::cin >> word)
    list.push_back(word);

  for(auto x : list){
    std::cout << x << std::endl;
  }
  return 0;
}
