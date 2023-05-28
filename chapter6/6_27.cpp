#include <iostream>
#include <initializer_list>

int sum(std::initializer_list<int> arr)
{
  int res = 0;
  // initializer_list对象中的元素是常量，如果在循环体中尝试修改循环控制变量的值，将会导致编译错误
  // 将循环控制变量声明为引用类型可以避免拷贝对象，提高效率。
  for(const auto &cur : arr)
  {
    res += cur;
  }
  return res;
}


int main()
{
  std::initializer_list<int> arr = {1,2,3,4,5};
  std::cout << sum(arr) << std::endl;
  return 0;
}