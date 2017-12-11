#include "Livre.hpp"
#include <cstdlib>

Livre::Livre() {}

Livre::Livre(const std :: string& titre, const std :: string& auteur, int annee):_annee(annee)
{
  if (titre.find('\n') != std::string::npos)
    throw std::string("erreur : titre non valide ('\n' non autorisé)");
  if (titre.find(';') != std::string::npos)
    throw std::string("erreur : titre non valide (';' non autorisé)");
  if (auteur.find('\n') != std::string::npos)
    throw std::string("erreur : auteur non valide ('\n' non autorisé)");
  if (auteur.find(';') != std::string::npos)
    throw std::string("erreur : auteur non valide (';' non autorisé)");
  _titre=titre;
  _auteur=auteur;
    
}

const std :: string& Livre::getTitre() const
{
  return _titre;
}

const std :: string& Livre::getAuteur() const
{
  return _auteur;
}

int Livre::getAnnee() const
{
  return _annee;
}

bool Livre::operator<(const Livre& livre)
{
  if(_auteur<livre._auteur)
    return true;
  else if(_auteur==livre._auteur)
    {
      if(_titre<livre._titre)
	return true;
      else
	return false;
    }
  else
    return false;
}

bool operator==(const Livre& l1,const Livre& l2)
{
  if(l1.getAuteur()==l2.getAuteur()&&l1.getTitre()==l2.getTitre()&&l1.getAnnee()==l2.getAnnee())
    return true;
  else
    return false;
}

std::istream&operator>>(std::istream& is,Livre& l)
{
  std::string chaine;
  std::getline(is,l._titre,';');
  std::getline(is,l._auteur,';');
  std::getline(is,chaine,';');
  l._annee=std::stoi(chaine);
  return is;
}

std::ostream&operator<<(std::ostream&os,const Livre& l)
{
  os<<l.getTitre() + ';' + l.getAuteur() + ';' + std::to_string(l.getAnnee());
  return os;
}
