#include <iostream>

int main()
{
  std::cout << "Enter two number: " << std::endl;
  int a = 0, b = 0;
  std::cin >> a >> b;    
  int tag = a > b ? b : a;
  int max = a + b - tag;
  while(tag <= max) 
  {
    std::cout << tag++ << std::endl;
  }  
  
  return 0;
}
