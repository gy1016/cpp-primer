#include <string>
#include <iostream>
#include "Screen.h"

int main()
{
    Screen s(5, 5, 'x');
    s.move(4, 0).set('#').display(std::cout);
    std::cout << std::endl;
    s.display(std::cout);
    std::cout << std::endl;

    return 0;
}