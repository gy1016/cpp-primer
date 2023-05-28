#include <iostream>
#include "Chapter6.h"

int main()
{
  int num, res;
  while(std::cin >> num)
  {
    res = fact(num);
    std::cout << "res is " << res << std::endl;
  }

  return 0;
}