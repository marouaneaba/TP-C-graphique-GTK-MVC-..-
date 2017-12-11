#include "FigureGeometrique.hpp"
#include<iostream>

FigureGeometrique::FigureGeometrique(const Couleur & couleur): _couleur(couleur){}

const Couleur & FigureGeometrique::getCouleur() const{
  return _couleur;
}

void FigureGeometrique::afficher() const{
  std::cout<<"Figure Geometrique"<<std::endl;
}
