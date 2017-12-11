#include "Produit.hpp"

BOOST_AUTO_TEST_CASE(Produit_test1){ // test unitaire
  Produit Clavier(0,"Clavier DELL");
  BOOST_CHECK_EQUAL(Clavier.getId(),0);
  BOOST_CHECK_EQUAL(Clavier.getDescription(),"Clavier DELL");
}
