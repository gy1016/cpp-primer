#include <iostream>
#include <vector>

int add(int a, int b) { return a + b; };
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }

// 在vector对象中保存这些函数的指针
std::vector<int (*)(int, int)> vec = {add, subtract, multiply, divide};

int main(int argc, char ** argv)
{
  std::cout << vec[0](1, 1) << ' ' << vec[1](1, 1) << ' ' << vec[2](1, 1) << ' ' << vec[3](1, 1) << std::endl;
}