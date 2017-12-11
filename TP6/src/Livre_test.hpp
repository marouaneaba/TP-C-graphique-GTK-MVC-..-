
BOOST_AUTO_TEST_CASE( Livre_test_bidon ) {
	BOOST_CHECK(true);
}


#include "Livre.hpp"

#include <sstream>

BOOST_AUTO_TEST_CASE( Livre_constructeur_1) {
	Livre livre("titre1", "auteur1", 1337);
	BOOST_CHECK_EQUAL(livre.getTitre(), "titre1");
	BOOST_CHECK_EQUAL(livre.getAuteur(), "auteur1");
	BOOST_CHECK_EQUAL(livre.getAnnee(), 1337);
}

BOOST_AUTO_TEST_CASE( Livre_constructeur_2) {
	try {
        Livre livre("titre1;", "auteur1", 1337);
		BOOST_ERROR( "exception non levee" );
	}
	catch (const std::string& str) {
		BOOST_CHECK_EQUAL(str, "erreur : titre non valide (';' non autorisé)");
	}
}

BOOST_AUTO_TEST_CASE( Livre_constructeur_3) {
	try {
        Livre livre("titre1", "auteur1;", 1337);
		BOOST_ERROR( "exception non levee" );
	}
	catch (const std::string& str) {
		BOOST_CHECK_EQUAL(str, "erreur : auteur non valide (';' non autorisé)");
	}
}

BOOST_AUTO_TEST_CASE( Livre_constructeur_4) {
	try {
        Livre livre("titre1", "auteur1\n", 1337);
		BOOST_ERROR( "exception non levee" );
	}
	catch (const std::string& str) {
		BOOST_CHECK_EQUAL(str, "erreur : auteur non valide ('\n' non autorisé)");
	}
}

BOOST_AUTO_TEST_CASE( Livre_inferieur_pp) {
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t0","a0",1), false);
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t0","a0",0), false);
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t0","a0",2), false);
}

BOOST_AUTO_TEST_CASE( Livre_inferieur_pz) {
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t0","a1",1), false);
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t0","a1",0), false);
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t0","a1",2), false);
}

BOOST_AUTO_TEST_CASE( Livre_inferieur_pm) {
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t0","a2",1), true);
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t0","a2",0), true);
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t0","a2",2), true);
}

BOOST_AUTO_TEST_CASE( Livre_inferieur_zp) {
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t1","a0",1), false);
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t1","a0",0), false);
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t1","a0",2), false);
}

BOOST_AUTO_TEST_CASE( Livre_inferieur_zz) {
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t1","a1",1), false);
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t1","a1",0), false);
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t1","a1",2), false);
}

BOOST_AUTO_TEST_CASE( Livre_inferieur_zm) {
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t1","a2",1), true);
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t1","a2",0), true);
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t1","a2",2), true);
}

BOOST_AUTO_TEST_CASE( Livre_inferieur_mp) {
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t2","a0",1), false);
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t2","a0",0), false);
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t2","a0",2), false);
}

BOOST_AUTO_TEST_CASE( Livre_inferieur_mz) {
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t2","a1",1), true);
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t2","a1",0), true);
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t2","a1",2), true);
}

BOOST_AUTO_TEST_CASE( Livre_inferieur_mm) {
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t2","a2",1), true);
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t2","a2",0), true);
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)<Livre("t2","a2",2), true);
}

BOOST_AUTO_TEST_CASE( Livre_egalite_1) {
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)==Livre("t1","a1",1), true);
}

BOOST_AUTO_TEST_CASE( Livre_egalite_2) {
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)==Livre("t2","a1",1), false);
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)==Livre("t1","a2",1), false);
	BOOST_CHECK_EQUAL(Livre("t1","a1",1)==Livre("t1","a1",2), false);
}

BOOST_AUTO_TEST_CASE( Livre_entree_1) {
	Livre livre;
	std::stringstream s("titre;auteur;42");
	s >> livre;
	BOOST_CHECK_EQUAL(livre.getTitre(), "titre");
	BOOST_CHECK_EQUAL(livre.getAuteur(), "auteur");
	BOOST_CHECK_EQUAL(livre.getAnnee(), 42);
}

BOOST_AUTO_TEST_CASE( Livre_sortie_1) {
	Livre livre("titre", "auteur", 42);
	std::stringstream s;
	s << livre;
	BOOST_CHECK_EQUAL(std::string("titre;auteur;42"), s.str());
}
