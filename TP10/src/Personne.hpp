#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>
#include <iostream>

struct Personne{
  std::string _nom;
  int _age;
};

std::ostream& operator<<(std::ostream& os, const Personne& l);

#endif
