#include <iostream>
#include <vector>
#include "Ligne.hpp"
#include "PolygoneRegulier.hpp"
#include "SuperViewer.hpp"

int main(int argc,char** argv) {
  // Couleur a{1,0,0};
  // Couleur b{0,1,0};
  // Point p0{0,0};
  // Point p1{100,200};
  // Ligne l(a,p0,p1);
  // l.afficher();
  // PolygoneRegulier p(b,p1,50,5);
  // p.afficher();
  // std::vector<FigureGeometrique*> _fig;
  // _fig.push_back(new Ligne(b,p1,p0));
  // _fig.push_back(new PolygoneRegulier(b,p0,50,5));
  // std::cout<<std::endl;
  // std::cout<<std::endl;
  // for(FigureGeometrique* a: _fig)
  //   a->afficher();
  // for(FigureGeometrique* a: _fig)
  //   delete a;
  // std::cout<<std::endl;
  // return 0;

  SuperViewer a(argc,argv);
  a.run();
  
}

