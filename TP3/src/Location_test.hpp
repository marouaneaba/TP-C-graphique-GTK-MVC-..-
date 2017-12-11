#include "Location.hpp"

BOOST_AUTO_TEST_CASE(Location_test1){ // test unitaire
  Location l{2,6};
  int produit=l._idProduit;
  int client=l._idClient;
  BOOST_CHECK_EQUAL(produit,6);
  BOOST_CHECK_EQUAL(client,2);
}
