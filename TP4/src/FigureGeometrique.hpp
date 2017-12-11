#ifndef FigureGeometrique_HPP
#define FigureGeometrique_HPP
#include "Couleur.hpp"

class FigureGeometrique{

protected:
  Couleur _couleur;
public:
  FigureGeometrique(const Couleur & couleur);
  const Couleur & getCouleur() const;
  virtual void afficher() const;
};

#endif
