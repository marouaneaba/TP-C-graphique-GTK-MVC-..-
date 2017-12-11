#ifndef VUE_HPP_
#define VUE_HPP_

#include <gtkmm.h>

class Controleur;

// Classe abstraite pour dériver des vues du viewer de bouteilles.
class Vue {
protected:
  // Référence vers le controleur, selon l'architecture MVC.
  Controleur & _controlleur;
public:
  // Construit la vue.
  Vue(Controleur & controlleur);

  // Actualise la vue.
  virtual void actualiser() = 0;

  // Lance la vue. Utile pour les interfaces graphiques, qui demandent de
  // tout initialiser avant de lancer la boucle événementielle.
  virtual void run() = 0;
};

// interface graphique du viewer de bouteilles. Affiche le détails des
// bouteilles ainsi qu'un bouton pour ouvrir un fichier de bouteilles.
class VueGraphique : public Vue {
private:
  Gtk::Main _kit;
  Gtk::Window _window;
  Gtk::VBox _box;
  Gtk::Button _button;
  Gtk::ScrolledWindow _scrolledWindow;
  Gtk::TextView _textView;

public:
  // Constructeur à utiliser pour construire l'interface graphique.
  VueGraphique(int argc, char ** argv, Controleur & controlleur);

  // Actualise l'interface graphique. Cette methode appelle le controleur
  // pour obtenir le texte décrivant les bouteilles puis affiche ce texte.
  void actualiser() override;

  // Lance l'interface graphique. Cette methode est bloquante
  // (la methode termine quand la fenetre est fermée par l'utilisateur).
  void run() override;

private:
  void ouvrirFichier();
};

class VueConsole: public Vue {
public:
  
  // Constructeur à utiliser pour construire l'interface graphique.
  VueConsole(Controleur & controlleur);
  
  // Actualise l'interface graphique. Cette methode appelle le controleur
  // pour obtenir le texte décrivant les bouteilles puis affiche ce texte.
  void actualiser() override;

  // Lance l'interface graphique. Cette methode est bloquante
  // (la methode termine quand la fenetre est fermée par l'utilisateur).
  void run() override;
};
#endif
