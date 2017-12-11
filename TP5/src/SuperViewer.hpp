#ifndef SuperViewer_HPP
#define SuperViewer_HPP
#include <gtkmm.h>
#include "ZoneDessin.hpp"

class SuperViewer{
private:
  Gtk::Main _kit;
  Gtk::Window _window;
  ZoneDessin zone;
public:
  SuperViewer(int argc,char** argv);
  void run();
};

#endif
