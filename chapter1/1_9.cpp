#include <iostream>

int main()
{
  int sum = 0, n = 50;
    

  while(n <= 100) 
  {
    sum += n;
    n++;
  }  
  
  std::cout << sum << std::endl;
  return sum;
}
