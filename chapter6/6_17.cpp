#include <iostream>
#include "Chapter6.h"

int main()
{
  std::string str1 = "Hello World!";

  if(hasUpperCase(str1))
  {
    std::cout << "str1 contains uppercase letters\n";
  } else
  {
    std::cout << "str1 does not contain uppercase letters\n";
  }

  std::cout << "Before: " << str1 << '\n';
  toLowerCase(str1);
  std::cout << "After: " << str1 << '\n';

  return 0;
}