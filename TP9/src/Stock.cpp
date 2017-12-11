#include "Stock.hpp"

std::ostream & operator<<(std::ostream & os, const Stock & s){
  for(auto p = s._produits.begin(); p != s._produits.end(); p++)
    {
      os << p->first << " " << p->second << "L" << std::endl;
    }
  // auto f1=[&os,&s](){os << p->first << " " << p->second << "l" << endl;};
  // for_each(i.begin(),i.end(),f1);
  return os;
}

void Stock::recalculerStock(const Inventaire& i){
  _produits.clear();
  for(const Bouteille& b: i)
    {
      auto iter = _produits.find(b._nom);
      if (iter != _produits.end())
	iter->second+=b._volume;
      else
        _produits[b._nom]=b._volume;
    }
}
