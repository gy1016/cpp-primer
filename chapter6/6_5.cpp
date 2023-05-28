#include <iostream>
#include "Chapter6.h"

int main()
{
  int res, cur;

  while(std::cin >> cur) 
  {
    res = abs(cur);
    std::cout << "res is " << res << std::endl;
  }

  return  0;
}