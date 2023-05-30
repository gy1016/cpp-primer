#include <string>
#include <iostream>
#include "Sales_data.h"

int main()
{
    Sales_data data1;
    print(std::cout, data1) << std::endl;

    Sales_data data2("1-1");
    print(std::cout, data2) << std::endl;

    Sales_data data3("1-1", 1, 100);
    print(std::cout, data3) << std::endl;

    Sales_data data4(std::cin);
    print(std::cout, data4) << std::endl;

    return 0;
}