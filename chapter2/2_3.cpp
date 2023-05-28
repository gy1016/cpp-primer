#include <iostream>

int main()
{
  unsigned u = 10, u2 = 42;
  std::cout << u2 - u << std::endl;
  // -32 + Math.pow(2, 32)
  std::cout << u - u2 << std::endl;

  return 0;
}
