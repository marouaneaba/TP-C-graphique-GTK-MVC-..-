#ifndef Bibliotheque_HPP
#define Bibliotheque_HPP
#include "Livre.hpp"
#include <vector>

class Bibliotheque{
private:
  std :: vector<Livre> _livre;
public:
  void afficher() const;
  void trierParAuteurEtTitre();
  void trierParAnnee();
  void lireFichier(const std::string& nomFichier);
  void ecrireFichier(const std::string& nomFichier) const;
};

#endif
