#include "Personne.hpp"

std::ostream& operator<<(std::ostream& os, const Personne& l){
  os << l._nom  << " " << l._age << std::endl;
  return os;
}
