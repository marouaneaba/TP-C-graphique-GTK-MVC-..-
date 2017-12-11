#include "Ligne.hpp"
#include <iostream>

Ligne::Ligne(const Couleur & couleur,const Point & p0,const Point & p1):FigureGeometrique(couleur),_p0(p0),_p1(p1){}

void Ligne::afficher(Glib::RefPtr<Gdk::Window> window,Cairo::RefPtr<Cairo::Context> cr) const{
  // std::cout<<"Ligne "<<_couleur._r<<"_"<<_couleur._g<<"_"<<_couleur._b<<" "<<_p0._x<<"_"<<_p0._y<<" "<<_p1._x<<"_"<<_p1._y<<std::endl;
    if (window) {
    // règle le tracé
    cr->set_source_rgb(_couleur._r,_couleur._g,_couleur._b);
    cr->set_line_width(10.0);
    // dessine une ligne
    cr->move_to(_p0._x,_p0._y);
    cr->line_to(_p1._x,_p1._y);
    }
}
const Point& Ligne::getP0() const{
  return _p0;
}
const Point& Ligne::getP1() const{
  return _p1;
}
