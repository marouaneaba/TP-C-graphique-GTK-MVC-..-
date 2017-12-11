#ifndef STOCK_HPP
#define STOCK_HPP

#include "Inventaire.hpp"
#include <map>
#include <algorithm>
#include <iostream>
#include <string>

class Stock{
public:
  std::map<std::string,float> _produits;
  void recalculerStock(const Inventaire& i);
};

std::ostream & operator<<(std::ostream & os, const Stock & s);
 
#endif
