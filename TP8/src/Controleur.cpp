#include "Controleur.hpp"

#include <cassert>
#include <fstream>
#include <iostream>
#include <sstream>

Controleur::Controleur(int argc, char ** argv) {
  //_inventaire.push_back(Bouteille{"mescaline", "2013-06-18", 0.1});
  chargerInventaire("mesBouteilles.txt");
  _vues.push_back(std::make_unique<VueConsole>(*this));
  _vues.push_back(std::make_unique<VueGraphique>(argc, argv, *this));
}

void Controleur::run() {
  for (auto & v : _vues)
    v->run();
}

std::string Controleur::getTexte() const{
  std::ostringstream oss;
  oss << _inventaire;
  return oss.str();
}

void Controleur::chargerInventaire(std::string nomfichier){
  std::ifstream is(nomfichier); // crée un flux d'entrée vers un fichier
  while (is >> _inventaire) { // lit dans le flux
   }
}
