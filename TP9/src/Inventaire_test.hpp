#include "Inventaire.hpp"

#include <sstream>

BOOST_AUTO_TEST_CASE( TestInventaire_1) {
	std::locale vieuxLoc = std::locale::global(std::locale("fr_FR.UTF-8"));
	Inventaire inventaire;
	inventaire.push_back(Bouteille{"cyanure", "2013-08-18", 0.25});
	inventaire.push_back(Bouteille{"mescaline", "2013-06-18", 0.1});
	std::ostringstream oss;
	// TODO decommenter
	oss << inventaire;
	BOOST_CHECK_EQUAL(oss.str(), "cyanure;2013-08-18;0,25\nmescaline;2013-06-18;0,1\n");
	std::locale::global(vieuxLoc);
}

BOOST_AUTO_TEST_CASE( TestInventaire_2) {
	std::locale vieuxLoc = std::locale::global(std::locale("fr_FR.UTF-8"));
	Inventaire inventaire;
	std::istringstream iss("cyanure;2013-08-18;0,25\nmescaline;2013-06-18;0,1\n");
	// TODO decommenter
	iss >> inventaire;
	std::ostringstream oss;
	//TODO decommenter
	oss << inventaire;
	BOOST_CHECK_EQUAL(oss.str(), "cyanure;2013-08-18;0,25\nmescaline;2013-06-18;0,1\n");
	std::locale::global(vieuxLoc);
}

BOOST_AUTO_TEST_CASE( TestInventaire_3) {
	auto funcCompare2Bouteilles =
			[] (const Bouteille &b1, const Bouteille &b2)
			{ return b1._nom < b2._nom; };
	Bouteille b1{"nom1", "date", 42};
	Bouteille b2{"nom0", "date", 37};
	BOOST_CHECK_EQUAL( funcCompare2Bouteilles(b1,b2), false );
}

BOOST_AUTO_TEST_CASE( TestInventaire_4) {
	auto funcCompare2Bouteilles =
			[] (const Bouteille &b1, const Bouteille &b2)
			{ return b1._nom < b2._nom; };
	Bouteille b1{"nom1", "date", 42};
	Bouteille b2{"nom2", "date", 37};
	BOOST_CHECK_EQUAL( funcCompare2Bouteilles(b1,b2), true );
}

