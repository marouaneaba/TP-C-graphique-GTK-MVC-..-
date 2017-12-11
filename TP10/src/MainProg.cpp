#include <iostream>

#include "Liste.hpp"
#include "Personne.hpp"

int main() {

  Liste<Personne> l1;
  Personne a{"ADANSAR",22};
  Personne b{"ABAKARIM",24};
  l1.push_front(a);
  l1.push_front(b);
  std::cout << l1 << std::endl;
  l1.clear();

  return 0;
}

