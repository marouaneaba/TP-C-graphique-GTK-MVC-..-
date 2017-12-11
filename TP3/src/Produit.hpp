#ifndef Produit_H
#define Produit_H
#include <string>

class Produit{
private:
  int _id;
  std::string _description;
public:
  Produit(int id,const std::string& description);
  int getId()const;
  const std::string& getDescription() const;
  void afficherProduit() const;
};

#endif
