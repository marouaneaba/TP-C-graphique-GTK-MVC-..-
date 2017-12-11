
BOOST_AUTO_TEST_CASE( Bibliotheque_test_bidon ) {
	BOOST_CHECK(true);
}

/*

#include "Bibliotheque.hpp"

BOOST_AUTO_TEST_CASE( Bibliotheque_trierParAuteurEtTitre_1) {
	Bibliotheque b;
    b.push_back(Livre("t1","a1",13));
    b.push_back(Livre("t2","a2",37));
    b.push_back(Livre("t0","a0",42));
    b.trierParAuteurEtTitre();
	BOOST_CHECK_EQUAL(b[0], Livre("t0","a0",42));
	BOOST_CHECK_EQUAL(b[1], Livre("t1","a1",13));
	BOOST_CHECK_EQUAL(b[2], Livre("t2","a2",37));
}

BOOST_AUTO_TEST_CASE( Bibliotheque_trierParAuteurEtTitre_2) {
	Bibliotheque b;
    b.push_back(Livre("t1","a1",13));
    b.push_back(Livre("t2","a0",37));
    b.push_back(Livre("t0","a0",42));
    b.trierParAuteurEtTitre();
	BOOST_CHECK_EQUAL(b[0], Livre("t0","a0",42));
	BOOST_CHECK_EQUAL(b[1], Livre("t2","a0",37));
	BOOST_CHECK_EQUAL(b[2], Livre("t1","a1",13));
}

BOOST_AUTO_TEST_CASE( Bibliotheque_trierParAnnee_1) {
	Bibliotheque b;
    b.push_back(Livre("t0","a0",42));
    b.push_back(Livre("t1","a1",13));
    b.push_back(Livre("t2","a2",37));
    b.trierParAnnee();
	BOOST_CHECK_EQUAL(b[0], Livre("t1","a1",13));
	BOOST_CHECK_EQUAL(b[1], Livre("t2","a2",37));
	BOOST_CHECK_EQUAL(b[2], Livre("t0","a0",42));
}

BOOST_AUTO_TEST_CASE( Bibliotheque_fichier_1 ) {
	Bibliotheque b1;
    b1.push_back(Livre("t0","a0",42));
    b1.push_back(Livre("t1","a1",13));
    b1.push_back(Livre("t2","a2",37));
    b1.ecrireFichier("bibliotheque_fichier_tmp.txt");
	Bibliotheque b2;
    b2.lireFichier("bibliotheque_fichier_tmp.txt");
	BOOST_CHECK_EQUAL(b2[0], Livre("t0","a0",42));
	BOOST_CHECK_EQUAL(b2[1], Livre("t1","a1",13));
	BOOST_CHECK_EQUAL(b2[2], Livre("t2","a2",37));
}

BOOST_AUTO_TEST_CASE( Bibliotheque_charger_1 ) {
	Bibliotheque b;
	try {
		b.lireFichier("bibliotheque_fichier_inexistant.txt");
		BOOST_ERROR("exception non levee");
	}
	catch (const std::string& str) {
		BOOST_CHECK_EQUAL(str, "erreur : lecture du fichier impossible");
	}
}

*/

