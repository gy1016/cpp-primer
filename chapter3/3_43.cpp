#include <iostream>

int main()
{
  int ia[3][4] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11}
  };

  for(int i = 0; i < 3; ++i) {
    for(int j = 0; j < 4; ++j) {
      std::cout << ia[i][j] << std::endl;
    }
  }

  for(auto &a : ia) {
    for(auto x : a) {
      std::cout << x << std::endl;
    }
  }

  for(auto p = ia; p != ia + 3; p++) {
    for(auto q = *p; q != *p + 4; ++q) {
      std::cout << *q << std::endl;
    }
  }

  return 0;
}

