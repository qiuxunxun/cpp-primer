#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct Sales_data {
  std::string bookNo;
  unsigned sold_units = 0;
  double revenue = 0.0;

  Sales_data() = default;
  Sales_data(std::string s) : bookNo(s), sold_units(0), revenue(0.0){};
};

#endif
