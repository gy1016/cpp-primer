#include <iostream>
#include <string>
#include <fstream>
#include "../chapter7/Sales_data.h"

using namespace std;

int main(int argc, char **argv)
{
    ifstream ifs(argv[1]);
    ofstream ofs(argv[2]);

    if (!ifs)
        return -1;

    Sales_data total(ifs);

    if (!total.isbn().empty())
    {
        Sales_data trans;

        while (read(ifs, trans))
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(ofs, total);
                ofs << std::endl;
                total = trans;
            }
        }
        print(ofs, total);
        ofs << std::endl;
        return 0;
    }
    else
    {
        return -1;
    }
}