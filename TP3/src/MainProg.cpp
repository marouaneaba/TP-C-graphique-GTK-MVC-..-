#include <iostream>
#include "Location.hpp"
#include "Client.hpp"
#include "Produit.hpp"
#include "Magasin.hpp"

int main() {
  Location a{0,2};
  a.afficherLocation();
  Client Med(0,"Mohamed");
  Med.afficherClient();
  Produit Ampoule(0,"Ampoule LED");
  Ampoule.afficherProduit();
  Magasin m;
  m.ajouterClient("Ahmed");
  m.ajouterClient("Mohamed");
  m.ajouterClient("Julien");
  m.ajouterClient("Albert");
  m.afficherClients();
  m.supprimerClient(2);
  m.afficherClients();
  m.ajouterProduit("Souris");
  m.ajouterProduit("Clavier");
  m.ajouterProduit("Ecran");
  m.ajouterProduit("DVD");
  m.afficherProduits();
  m.supprimerProduit(1);
  m.afficherProduits();
  return 0;
}

