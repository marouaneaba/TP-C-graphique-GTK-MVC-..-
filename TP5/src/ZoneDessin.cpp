#include "ZoneDessin.hpp" 
#include "Ligne.hpp"
#include "PolygoneRegulier.hpp"

ZoneDessin::ZoneDessin(){
  Couleur a{1,0,0};
  Couleur b{0,1,0};
  Point p0{10,10};
  Point p1{100,200};
  Point p2{250,300};
  Point p3{300,100};
  Ligne l(a,p0,p1);
  PolygoneRegulier p(b,p1,50,5);
  _figures.push_back(new Ligne(b,p0,p3));
  _figures.push_back(new PolygoneRegulier(a,p1,50,5));
  _figures.push_back(new PolygoneRegulier(b,p2,50,5));
} 

bool ZoneDessin::on_expose_event(GdkEventExpose*){
  // Glib::RefPtr<Gdk::Window> window = get_window();
  // if (window) {
  //   Cairo::RefPtr<Cairo::Context> cr = window->create_cairo_context();
  //   // règle le tracé
  //   //   cr->set_source_rgb(1.0,0.0,0.0);
  //   // cr->set_line_width(10.0);
  //   // dessine une diagonale

  //   // cr->line_to(0,window->get_height());
  //   //  cr->line_to(0,0);
  //   //dessine les figures géometrique
    
  //   for(FigureGeometrique* a: _figures)
  //     {
  // 	a->afficher(window,cr);
  // 	    cr->stroke();

  //     }
    
    // met à jour l'affichage 
  //}
  return true;
}
bool ZoneDessin::gererClic(GdkEventButton* event){
  
    Glib::RefPtr<Gdk::Window> window = get_window();
  if (window) {
    Cairo::RefPtr<Cairo::Context> cr = window->create_cairo_context();
    // règle le tracé
    //   cr->set_source_rgb(1.0,0.0,0.0);
    // cr->set_line_width(10.0);
    // dessine une diagonale

    // cr->line_to(0,window->get_height());
    //  cr->line_to(0,0);
    //dessine les figures géometrique
    
    for(FigureGeometrique* a: _figures)
      {
	a->afficher(window,cr);
	    cr->stroke();

      }
    
    // met à jour l'affichage 
  }
  Gdk::Window::invalidate;
  return true;
}
