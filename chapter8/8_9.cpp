#include <iostream>
#include <string>
#include <sstream>

std::istream &iofunction(std::istream &is)
{
    std::string s;
    while (is >> s)
        std::cout << s << std::endl;
    is.clear();
    return is;
}

int main()
{
    std::istringstream istrs("aa\nnn\nvv dd");
    iofunction(istrs);

    return 0;
}