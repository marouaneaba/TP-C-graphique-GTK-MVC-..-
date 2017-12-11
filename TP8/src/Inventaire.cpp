#include "Inventaire.hpp"

std::ostream& operator <<(std::ostream& os, const Inventaire& i) {
  for(Bouteille b: i)
    {
      os << b;
    }
  return os;
}

std::istream& operator >>(std::istream& is, Inventaire& i) {
  Bouteille b;
  while(is>>b)
    {
      i.push_back(b);
    }
  return is;
}
