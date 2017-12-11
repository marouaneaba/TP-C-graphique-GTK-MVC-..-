#include <iostream>
#include "Image.hpp"

int main() {
  Image img(800,600);


  remplir(img);
  ecrirePnm(img,"med.pnm");
   
  return 0;
}

