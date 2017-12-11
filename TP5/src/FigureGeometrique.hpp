#ifndef FigureGeometrique_HPP
#define FigureGeometrique_HPP
#include "Couleur.hpp"
#include <gtkmm.h>

class FigureGeometrique{

protected:
  Couleur _couleur;
public:
  FigureGeometrique(const Couleur & couleur);
  const Couleur & getCouleur() const;
  virtual void afficher(Glib::RefPtr<Gdk::Window>,Cairo::RefPtr<Cairo::Context>) const=0;
};

#endif
