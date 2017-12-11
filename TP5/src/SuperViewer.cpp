#include "SuperViewer.hpp"

SuperViewer::SuperViewer(int argc,char** argv):_kit(argc, argv){
  _window.set_title("TP5");
  _window.set_default_size(640,480);
  _window.add(zone);
  zone.signal_button_press_event.connect(sigc::mem_fun(*this,&ZoneDessin::gererClic));
  _window.show_all();
}

void SuperViewer::run(){
  _kit.run(_window);
}
