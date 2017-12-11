#include "Client.hpp"

BOOST_AUTO_TEST_CASE(Client_test1){ // test unitaire
  Client Med(0,"Mohamed");
  int id=Med.getId();
  std::string nom=Med.getNom();
  BOOST_CHECK_EQUAL(id,0);
  BOOST_CHECK_EQUAL(nom,"Mohamed");
}
