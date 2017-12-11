#include "Liste.hpp"

BOOST_AUTO_TEST_CASE(liste_test1) { // test unitaire
  Liste l;
  int taille=l.getTaille();
  BOOST_CHECK_EQUAL(taille,0);
}
BOOST_AUTO_TEST_CASE(liste_test2) { // test unitaire
  Liste l;
  l.ajouterDevant(3);
  int taille=l.getTaille();
  BOOST_CHECK_EQUAL(taille,1);
}
BOOST_AUTO_TEST_CASE(liste_test3) { // test unitaire
  Liste l;
  l.ajouterDevant(8);
  int taille=l.getTaille();
  BOOST_CHECK_EQUAL(taille,2);
}
