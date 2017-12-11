#include "PolygoneRegulier.hpp"

BOOST_AUTO_TEST_CASE(PolygoneRegulier_test1){ // test unitaire
  Couleur c;
  Point p0,p1;
  c._r=0;
  c._g=0;
  c._b=1;
  p0._x=0;
  p0._y=0;
  p1._x=100;
  p1._y=200;
  Ligne l(c,p0,p1);
  BOOST_CHECK_EQUAL(p0._x,0);
  BOOST_CHECK_EQUAL(p0._y,0);
  BOOST_CHECK_EQUAL(p1._x,100);
  BOOST_CHECK_EQUAL(p1._y,200);
}
