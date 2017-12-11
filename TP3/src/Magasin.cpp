#include "Magasin.hpp"
#include <iostream>

Magasin::Magasin():_idCourantClient(0),_idCourantProduit(0){
}

int Magasin::nbClients()const{
  return _clients.size();
}

void Magasin::ajouterClient(const std::string& nom){
  Client tmp(_idCourantClient++,nom);
  _clients.push_back(tmp);
}

void Magasin::afficherClients()const{
  for(Client tmp: _clients){
    tmp.afficherClient();
  }
}

void Magasin::supprimerClient(int idClient){
  for(Client& tmp: _clients){
    if(tmp.getId()==idClient){
      std::swap(tmp,_clients.back());
      _clients.pop_back();
      break;
    }
  }
}






int Magasin::nbProduits()const{
  return _produits.size();
}

void Magasin::ajouterProduit(const std::string& nom){
  Produit tmp(_idCourantProduit++,nom);
  _produits.push_back(tmp);
}

void Magasin::afficherProduits()const{
  for(Produit tmp: _produits){
    tmp.afficherProduit();
  }
}

void Magasin::supprimerProduit(int idProduit){
  for(Produit& tmp: _produits){
    if(tmp.getId()==idProduit){
      std::swap(tmp,_produits.back());
      _produits.pop_back();
      break;
    }
  }
}
