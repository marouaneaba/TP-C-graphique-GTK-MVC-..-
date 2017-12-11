
#include "Liste.hpp"

BOOST_AUTO_TEST_CASE( TestListe_1) {
  Liste<int> liste;
  BOOST_CHECK_EQUAL(liste.empty(), true);
}

BOOST_AUTO_TEST_CASE( TestListe_2) {
  Liste<int> liste;
  liste.push_front(1);
  BOOST_CHECK_EQUAL(liste.empty(), false);
  BOOST_CHECK_EQUAL(liste.front(), 1);
}

BOOST_AUTO_TEST_CASE( TestListe_3) {
  Liste<int> liste;
  liste.push_front(1);
  liste.push_front(2);
  BOOST_CHECK_EQUAL(liste.empty(), false);
  BOOST_CHECK_EQUAL(liste.front(), 2);
}

BOOST_AUTO_TEST_CASE( TestListe_4) {
  Liste<int> liste;
  liste.push_front(1);
  liste.push_front(2);
  liste.clear();
  BOOST_CHECK_EQUAL(liste.empty(), true);
}

BOOST_AUTO_TEST_CASE( TestListe_5) {
  Liste<int> liste;
  BOOST_CHECK_EQUAL(liste.begin() != liste.end(), false);
}

BOOST_AUTO_TEST_CASE( TestListe_6) {
  Liste<int> liste;
  liste.push_front(37);
  BOOST_CHECK_EQUAL(liste.begin() != liste.end(), true);
}

BOOST_AUTO_TEST_CASE( TestListe_7) {
  Liste<int> liste;
  liste.push_front(37);
  Liste<int>::iterator iter = liste.begin();
  BOOST_CHECK_EQUAL(iter != liste.end(), true);
  ++iter;
  BOOST_CHECK_EQUAL(iter != liste.end(), false);
}

BOOST_AUTO_TEST_CASE( TestListe_8) {
  Liste<int> liste;
  liste.push_front(37);
  Liste<int>::iterator iter = liste.begin();
  BOOST_CHECK_EQUAL(*iter, 37);
}

BOOST_AUTO_TEST_CASE( TestListe_9) {
  Liste<int> liste;
  liste.push_front(37);
  liste.push_front(42);
  std::ostringstream stream;
  stream << liste;
  BOOST_CHECK_EQUAL(stream.str(), "42 37 ");
}

