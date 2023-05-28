#include <iostream>
#include <vector>

int main()
{
  std::vector<int> l1;
  int n;
  
  while(std::cin >> n){
    l1.push_back(n);
  }  
  
  int len = l1.size();  

  std::vector<int> r1;
  std::vector<int> r2;

  for(int i = 0; i < len / 2; ++i) {
    r1.push_back(l1[2 * i] + l1[2 * i + 1]);
    r2.push_back(l1[i] + l1[len - 1 - i]);
  }
  
  for(auto t : r1) std::cout << t << std::endl;
  for(auto t : r2) std::cout << t << std::endl;

  return 0;
}


