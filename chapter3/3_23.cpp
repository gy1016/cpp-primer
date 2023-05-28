#include <iostream>
#include <vector>

int main()
{
  std::vector<int> list{1,2,3,4,5,6,7,8,9,10};

  for(auto it = list.begin(); it != list.end(); ++it) {
    *it *= (*it);
    std::cout << (*it) << std::endl;
  }  

  return 0;
}

