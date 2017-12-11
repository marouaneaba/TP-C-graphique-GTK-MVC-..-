#ifndef ZoneDessin_HPP
#define ZoneDessin_HPP
#include <gtkmm.h>
#include "FigureGeometrique.hpp"

class ZoneDessin: public Gtk::DrawingArea{
private:
  std::vector<FigureGeometrique*> _figures;
public:
  ZoneDessin();
  bool on_expose_event(GdkEventExpose*) override;
  bool gererClic(GdkEventButton* event);
};

#endif
