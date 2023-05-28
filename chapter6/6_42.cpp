#include <iostream>
#include <string>

using std::string;

string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
  return (ctr > 1) ? word + ending : word;
}

int main(int argc, char **argv)
{
  string str1 = "success", str2 = "failure";
  size_t ctr = 2;
  std::cout << make_plural(ctr, str1) << "\n" << make_plural(ctr, str2) << std::endl;
  return 0;
}
