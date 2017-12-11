#include "Location.hpp"
#include <iostream>

void Location::afficherLocation() const{
  std::cout<<"Location du Produit N° "<<_idProduit<<" par Client N° "<<_idClient<<std::endl;
}
