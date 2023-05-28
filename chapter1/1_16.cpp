#include <iostream>

int main()
{
  int sum = 0, n = 0;
    

  while(std::cin >> n) 
  {
    sum += n;
  }  
  
  std::cout << "Sum is " << sum << std::endl;
  return 0;
}
