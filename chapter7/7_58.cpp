#include <vector>

class Example
{
public:
    static double rate;
    static const int vecSize = 20;
    static std::vector<double> vec;
};

double Example::rate = 6.5;
std::vector<double> Example::vec(vecSize);
