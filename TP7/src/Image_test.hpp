BOOST_AUTO_TEST_CASE(Image_test) {
	BOOST_CHECK(true);
}


#include "Image.hpp"

BOOST_AUTO_TEST_CASE( Image_Largeur) {
  Image img(3,4);
  BOOST_CHECK_EQUAL(img.getLargeur(), 3);
}

BOOST_AUTO_TEST_CASE( Image_Hauteur) {
  Image img(3,4);
  BOOST_CHECK_EQUAL(img.getHauteur(), 4);
}

BOOST_AUTO_TEST_CASE( Image_setPixel) {
  Image img(3,4);
  img.setPixel(0,0,255);
  BOOST_CHECK_EQUAL(img.getPixel(0,0),255);
}
