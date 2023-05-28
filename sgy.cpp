#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::endl;
using std::string;

double calc(double num);
void print(const int ia[], size_t size);

int main()
{
  calc(66);
  int j[] = {0, 1};
  print(j, std::end(j) - std::begin(j));
  return 0;
}


void print(const int ia[], size_t size)
{
  for(size_t i = 0; i != size; ++i)
  {
    cout << ia[i] << endl;
  }
}

double calc(double num)
{
  cout << num << endl;
  return num;
}