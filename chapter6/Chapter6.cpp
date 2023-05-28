#include <iostream>

void reset(int &i)
{
  i = 0;
}

int fact(int val)
{
  int ret = 1;
  while(val > 1)
    ret *= val--;
  return ret;
}

int abs(int num)
{
  return num > 0 ? num : -1 * num;
}

void staticsFunc()
{
  static int count = 0;
  count++;
  std::cout << "statics is " << count << std::endl;
}

void swap(int *a, int * b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void swap_reference(int &a, int &b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

// 这是一个底层const
bool hasUpperCase(const std::string& str)
{
  for(char c : str)
  {
    if(std::isupper(c)) 
    {
      return true;
    }
  }
  return false;
}

void toLowerCase(std::string& str)
{
  for(char& c : str)
  {
    c = std::tolower(c);
  }
}