#include "Inventaire.hpp"

std::ostream& operator <<(std::ostream& os, const Inventaire& i) {
  // for(unsigned int j=0;j<i.size();j++)
  //   {
  //     os << i[j];
  //   }
  // for (auto it=i.begin(); it!=i.end(); ++it)
  //   {
  //     os << *it;
  //   }
  // for(const Bouteille& b: i)
  //   {
  //     os << b;
  //   }
  auto f1=[&os](const Bouteille& b){os << b;};
  for_each(i.begin(),i.end(),f1);
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

void Inventaire::trier() {
  auto f1 = [](const Bouteille& b0, const Bouteille& b1){ return b0._nom<b1._nom; };
  //std::sort(begin(),end());
  //std::sort(begin(),end(),f1);
  sort(f1);
}
