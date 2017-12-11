#include "Liste.hpp"
#include <iostream>
#include <cassert>

Liste::Liste(){
  _tete = nullptr;
}

void Liste::ajouterDevant(int a){
  
  Noeud * elt  = new Noeud;
  elt->_valeur = a;
  elt->_suivant = _tete;
  _tete=elt;
}

int Liste::getElement(int indice){

  for(int i=0; i<indice && _tete != nullptr; i++)
    {
      _tete = _tete->_suivant;
    }
  assert(_tete != nullptr);
  return _tete->_valeur;
}

int Liste::getTaille(){
  int i;
  for(i=0; _tete != nullptr; i++)
    {
      _tete = _tete->_suivant;
    }
  return i;
}
