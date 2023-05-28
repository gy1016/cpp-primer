#include <iostream>
#include "Chapter6.h"

int main()
{
  int a = 1, b = 2;
  swap_reference(a, b);
  std::cout << a << " " << b << std::endl;
  return 0;
}
