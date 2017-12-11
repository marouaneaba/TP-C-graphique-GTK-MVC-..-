#ifndef H_LISTE
#define H_LISTE

struct Noeud{
  int _valeur;
  Noeud * _suivant;
};
  
struct Liste{
  Noeud * _tete;
  Liste();
  void ajouterDevant(int a);
  int getElement(int indice);
  int getTaille();
};

#endif
