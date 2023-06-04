#include <iostream>
#include <string>

std::istream &iofunction(std::istream &is)
{
    std::string s;
    while (is >> s)
        std::cout << s << std::endl;
    is.clear();
    return is;
}