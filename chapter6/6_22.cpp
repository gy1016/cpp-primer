#include <iostream>

void swapIntPointers(int*& p1, int*& p2) {
    int* temp = p1;
    p1 = p2;
    p2 = temp;
}

int main()
{
  int x = 1, y = 2;
  int* p1 = &x;
  int* p2 = &y;
  std::cout << "Before swap: p1 = " << *p1 << ", p2 = " << *p2 << '\n';
  swapIntPointers(p1, p2);
  std::cout << "After swap: p1 = " << *p1 << ", p2 = " << *p2 << '\n';
  
  return 0;
}