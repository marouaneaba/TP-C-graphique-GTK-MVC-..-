#include "PolygoneRegulier.hpp"
#include <cmath>
#include <iostream>
#define PI 3.14159265358979323846  /* pi */

PolygoneRegulier::PolygoneRegulier(const Couleur & couleur, const Point & centre,int rayon, int nbCotes):FigureGeometrique(couleur),_nbPoints(nbCotes){
  _points=new Point[nbCotes];
  for(int i=0;i<nbCotes;i++){
    _points[i]._x=centre._x+(cos((2*PI*(i))/nbCotes)*rayon);
    _points[i]._y=centre._y+(sin((2*PI*(i))/nbCotes)*rayon);
  }
}

void PolygoneRegulier::afficher() const{
  std::cout<<"PolygoneRegulier "<<_couleur._r<<"_"<<_couleur._g<<"_"<<_couleur._b<<" ";
  for(int i=0;i<_nbPoints;i++){
    std::cout<<_points[i]._x<<"_"<<_points[i]._y<<" ";
  }
}

int PolygoneRegulier::getNbPoints() const{
  return _nbPoints;
}

const Point & PolygoneRegulier::getPoint(int indice) const{
  return _points[indice];
}

PolygoneRegulier::~PolygoneRegulier(){
  delete[] _points;
}
