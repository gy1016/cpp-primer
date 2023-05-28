#include <iostream>

void print1(const int *arr) 
{
  while(*arr || *arr == 0)
    std::cout << *arr++ << std::endl;
}

void print2(const int* beg, const int* end)
{
  while(beg != end)
    std::cout << *beg++ << std::endl;
}

void print3(const int ia[], size_t size)
{
  for(size_t i = 0; i != size; ++i)
  {
    std::cout << ia[i] << std::endl;
  }
}

int main()
{
  int i = 0,  j[2] = {0, 1};
  // print1(&i);
  // print1(j);

  print2(std::begin(j), std::end(j));

  print3(j, std::end(j) - std::begin(j));

  return 0;
}