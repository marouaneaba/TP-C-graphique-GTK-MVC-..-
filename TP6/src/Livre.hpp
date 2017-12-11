#ifndef LIVRE_HPP_INCLUDED
#define LIVRE_HPP_INCLUDED
#include <string>
//#include <cstring>

class Livre
{
private:
  std::string _titre;
  std::string _auteur;
  int _annee;
public:
  Livre();
  Livre(const std :: string& titre, const std :: string&auteur, int annee);
  const std :: string& getTitre() const;
  const std :: string& getAuteur() const;
  int getAnnee() const;
  bool operator<(const Livre& livre);
  friend std::istream&operator>>(std::istream& is,Livre& l);
};

bool operator==(const Livre& l1,const Livre& l2);
std::ostream&operator<<(std::ostream&os,const Livre& l);
std::istream&operator>>(std::istream& is,Livre& l);

#endif // LIVRE_HPP_INCLUDED
