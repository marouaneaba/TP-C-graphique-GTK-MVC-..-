#include "Stock.hpp"

#include <sstream>

BOOST_AUTO_TEST_CASE( TestStock_1) {
	std::locale vieuxLoc = std::locale::global(std::locale("fr_FR.UTF-8"));
	Stock s;
	s._produits.insert(std::pair<std::string,float>("Evian",2) );
	std::ostringstream oss;
	// TODO decommenter
	oss << s;
	BOOST_CHECK_EQUAL(oss.str(), "Evian 2l\n");
	std::locale::global(vieuxLoc);
}
