#include "Controleur.hpp"
#include "Vue.hpp"

#include <iostream>

///////////////////////////////////////
// Vue
///////////////////////////////////////

Vue::Vue(Controleur& controlleur) : _controlleur(controlleur) {}

///////////////////////////////////////
// VueGraphique
///////////////////////////////////////

VueGraphique::VueGraphique(int argc, char ** argv, Controleur & controlleur) :
Vue(controlleur), _kit(argc, argv) {

	// la fenêtre principale
	_window.set_title("Viewer de bouteilles");
	_window.set_size_request(400, 300);
	_window.set_resizable(false);
	_window.set_border_width(5);
	_button.set_label("Charger un inventaire");
	// ScrolledWindow : la fenêtre avec scrolling contenant le TextView
	_scrolledWindow.add(_textView);
	
	_scrolledWindow.set_policy(Gtk::POLICY_AUTOMATIC, Gtk::POLICY_AUTOMATIC);
	_box.pack_start(_scrolledWindow);
	_box.add(_button);
	_window.add(_box);
	_window.show_all();
	_button.signal_clicked().connect(sigc::mem_fun(*this, &VueGraphique::ouvrirFichier));
	actualiser();	// TODO virer ca, c'etait juste pour tester
}

void VueGraphique::actualiser() {
  std::string texte = _controlleur.getTexte();    //DONE
	_textView.get_buffer()->set_text(texte.c_str());
}

void VueGraphique::run() {
	_kit.run(_window);
}

void VueGraphique::ouvrirFichier() {
	Gtk::FileChooserDialog dialog(_window, "Ouvrir fichier...");
	dialog.add_button(Gtk::Stock::CANCEL, Gtk::RESPONSE_CANCEL);
	dialog.add_button(Gtk::Stock::OPEN, Gtk::RESPONSE_OK);
	int ret = dialog.run();
	if (ret == Gtk::RESPONSE_OK) {
		std::string nomFichier = dialog.get_filename();
	        _controlleur.chargerInventaire(nomFichier);
		actualiser();
	}
}

VueConsole::VueConsole(Controleur & controlleur) : Vue(controlleur){

}

void VueConsole::actualiser() {
  std::cout << _controlleur.getTexte() << std::endl;
}

void VueConsole::run() {
  actualiser();
}
