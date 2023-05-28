#include <iostream>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Sales_data total;
    double totalPrice;

    if (cin >> total.bookNo >> total.units_sold >> totalPrice)
    {
        total.revenue = total.units_sold * totalPrice;

        Sales_data trans;
        double transPrice;
        while (cin >> trans.bookNo >> trans.units_sold >> transPrice)
        {
            trans.revenue = trans.units_sold * transPrice;

            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
                if (total.units_sold != 0)
                    cout << total.revenue / total.units_sold << endl;
                else
                    cout << "(no sales)" << endl;

                total = trans;
            }
        }

        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
        if (total.units_sold != 0)
            cout << total.revenue / total.units_sold << endl;
        else
            cout << "(no sales)" << endl;

        return 0;
    }
    else
    {
        std::cerr << "No data!" << endl;

        return -1;
    }
    return 0;
}