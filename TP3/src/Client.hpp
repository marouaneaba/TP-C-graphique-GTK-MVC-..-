#ifndef Client_H
#define Client_H
#include <string>

class Client{
private:
  int _id;
  std::string _nom;
public:
  Client(int id,const std::string& nom);
  int getId()const;
  const std::string& getNom() const;
  void afficherClient() const;
};

#endif
