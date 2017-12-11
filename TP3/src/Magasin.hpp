#ifndef Magasin_H
#define Magasin_H
#include <string>
#include "Location.hpp"
#include "Client.hpp"
#include "Produit.hpp"
#include <vector>


class Magasin{
private:
  std::vector<Client> _clients;
  std::vector<Produit> _produits;
  std::vector<Location> _locations;
  int _idCourantClient;
  int _idCourantProduit;
public:
  Magasin();
  int nbClients()const;
  void ajouterClient(const std::string& nom);
  void afficherClients()const;
  void supprimerClient(int idClient);
  int nbProduits()const;
  void ajouterProduit(const std::string & nom);
  void afficherProduits()const;
  void supprimerProduit(int idProduit);
};

#endif
