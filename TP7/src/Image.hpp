#ifndef IMAGE_HPP
#define IMAGE_HPP
#include <string>

class Image{
private:
  int _largeur;
  int _hauteur;
  int* _pixels;
public:
  Image(int largeur, int hauteur);
  Image(const Image& img);
  int getLargeur()const;
  int getHauteur()const;
  //accesseur/modificateur par copie:
  int getPixel(int i, int j)const;
  void setPixel(int i, int j, int couleur);
  //accesseur/modificateur par référence:
  int Pixel(int i, int j)const;
  int& Pixel(int i, int j);
  ~Image();
};

void remplir(Image & img);
void ecrirePnm(const Image & img, const std::string & nomFichier);
Image bordure(const Image & img, int couleur, int epaisseur);

#endif
