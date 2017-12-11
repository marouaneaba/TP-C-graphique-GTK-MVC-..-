#include "Magasin.hpp"

BOOST_AUTO_TEST_CASE(Magasin_test1){ // test unitaire
  Magasin Carrefour;
  Carrefour.ajouterClient("Mohamed");
  int x=Carrefour.nbClients();
  BOOST_CHECK_EQUAL(x,1);
}
