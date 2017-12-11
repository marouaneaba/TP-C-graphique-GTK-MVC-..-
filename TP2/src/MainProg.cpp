#include <iostream>
#include "Liste.hpp"

using namespace std;

int main() {
  Liste l;
  l.ajouterDevant(6);
  cout<<l.getElement(0)<<endl;
  
  l.ajouterDevant(29);
  cout<<l.getElement(1)<<endl;

  cout<<l.getTaille()<<endl;
  l.ajouterDevant(8);
  cout<<l.getElement(2)<<endl;
  l.ajouterDevant(3);
  cout<<l.getTaille()<<endl;
  l.ajouterDevant(13);
  l.ajouterDevant(34);
  cout<<l.getTaille()<<endl;
  l.ajouterDevant(23);
  l.ajouterDevant(26);
  cout<<l.getTaille()<<endl;
  cout<<l.getElement(2)<<endl;
  cout<<l.getTaille()<<endl;
  
  return 0;
}


