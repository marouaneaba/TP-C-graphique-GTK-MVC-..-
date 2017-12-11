#ifndef INVENTAIRE_HPP_
#define INVENTAIRE_HPP_

#include "Bouteille.hpp"
#include <algorithm>
#include <iostream>
#include <list>
#include <string>

// Modèle : inventaire de bouteilles.
struct Inventaire : std::list<Bouteille> {
public:
  void trier();  
};
std::ostream & operator<<(std::ostream & os, const Inventaire & i);
std::istream& operator >>(std::istream& is, Inventaire& i);

#endif
