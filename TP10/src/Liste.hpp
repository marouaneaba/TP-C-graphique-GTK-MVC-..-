
#ifndef LISTE_HPP_
#define LISTE_HPP_

#include <cassert>
#include <ostream>
#include <string>

template <typename T>
// liste d'entiers avec itérateur
class Liste {
private:
  struct Noeud {
    T _valeur;
    Noeud* _ptrNoeudSuivant;
  };
  Noeud* _ptrTete;

public:
  class iterator {
  private:
    Noeud* _ptrNoeudCourant;
  public:
    iterator(Noeud* ptrNoeudCourant ):_ptrNoeudCourant(ptrNoeudCourant)
    {
    }
    
    const iterator & operator++() {
      if(_ptrNoeudCourant != nullptr )
	_ptrNoeudCourant=_ptrNoeudCourant->_ptrNoeudSuivant;
      return *this;
    }

    T& operator*() const {
      return _ptrNoeudCourant->_valeur;
    }

    bool operator!=(const iterator &a) const {
      return(_ptrNoeudCourant!=a._ptrNoeudCourant);
    }

    friend Liste; 
  };

public:
  Liste() {
    _ptrTete=nullptr;
  }
  
  void push_front(T x) {
    Noeud* tmp=new Noeud;
    tmp->_valeur=x;
    tmp->_ptrNoeudSuivant=_ptrTete;
    _ptrTete=tmp;
  }

  T& front() const {
    return _ptrTete->_valeur; 
  }

  void clear() {
    Noeud* tmp;
    tmp=_ptrTete;
    while(tmp!=nullptr){
      delete _ptrTete;
      _ptrTete=tmp->_ptrNoeudSuivant;
      tmp=_ptrTete;
    }
  }
  
  bool empty() const {
    return(_ptrTete==nullptr);
  }

  iterator begin() const {
    return iterator(_ptrTete);
  }

  iterator end() const {
    return iterator(nullptr);
  }

};

template <typename T>


std::ostream& operator<<(std::ostream& os, const Liste<T>& l) {
  for(auto iter=l.begin();iter!=l.end();++iter)
    os << *iter << " ";
  return os;
}

#endif
