#include <iostream>

int test(int a, const int *b);

int main()
{
  int a = 1, b = 2;
  int res = test(a, &b);
  std::cout << res << "\n";
  return 0;
}

int test(int a, const int *b)
{
  return a > *b ? a : *b;
}