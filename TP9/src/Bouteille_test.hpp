#include "Bouteille.hpp"

#include <sstream>

BOOST_AUTO_TEST_CASE( TestBouteille_1) {
    Bouteille b{"cyanure", "2013-08-18", 0.25};
	BOOST_CHECK_EQUAL(b._nom, "cyanure");
	BOOST_CHECK_EQUAL(b._date, "2013-08-18");
	BOOST_CHECK_EQUAL(b._volume, 0.25);
}

BOOST_AUTO_TEST_CASE( TestBouteille_2) {
	std::locale vieuxLoc = std::locale::global(std::locale("fr_FR.UTF-8"));
	Bouteille b{"cyanure", "2013-08-18", 0.25};
	std::ostringstream stream;
	stream << b;
	BOOST_CHECK_EQUAL(stream.str(), "cyanure;2013-08-18;0,25\n");
	std::locale::global(vieuxLoc);
}

BOOST_AUTO_TEST_CASE( TestBouteille_3) {
	std::locale vieuxLoc = std::locale::global(std::locale("fr_FR.UTF-8"));
	Bouteille b{"a", "b", 2};
	std::istringstream stream("cyanure;2013-08-18;0,25\n");
	stream >> b;
	BOOST_CHECK_EQUAL(b._nom, "cyanure");
	BOOST_CHECK_EQUAL(b._date, "2013-08-18");
	BOOST_CHECK_EQUAL(b._volume, 0.25);
	std::locale::global(vieuxLoc);
}
