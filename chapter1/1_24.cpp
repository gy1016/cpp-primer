#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item curVal, val;
  if(std::cin >> curVal){
    int cnt = 1;
    while(std::cin >> val) {
      if(curVal.isbn() == val.isbn()) cnt++;
      else {
        std::cout << curVal << " count: " << cnt << std::endl;
        curVal = val;
        cnt = 1;
      }
    }
    std::cout << curVal << " count: " << cnt << std::endl;
  }
  return 0;
}