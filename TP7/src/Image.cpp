#include "Image.hpp"
#include <cmath> 
#include <fstream>
#include <iostream>

Image::Image(const Image& img):_largeur(img.getLargeur()),_hauteur(img.getHauteur()){
  _pixels=new int[_largeur*_hauteur];
  for(int i=0;i<_largeur;i++)
    for(int j=0;j<_hauteur;j++)
      Pixel(i,j)=img.Pixel(i,j);
}

Image::Image(int largeur, int hauteur):_largeur(largeur),_hauteur(hauteur){
  _pixels=new int[_largeur*_hauteur];
}

int Image::getLargeur()const{
  return _largeur;
}

int Image::getHauteur()const{
  return _hauteur;
}

int Image::getPixel(int i, int j)const{
  return _pixels[(i*_largeur)+j];
}

void Image::setPixel(int i, int j, int couleur){
  _pixels[(i*_largeur)+j]=couleur;
}

int Image::Pixel(int i, int j)const{
  return _pixels[(i*_largeur)+j];
}

int& Image::Pixel(int i, int j){
  return _pixels[(i*_largeur)+j];
}

Image::~Image(){
  delete[] _pixels;
}

void remplir(Image & img){
  for(int j=0;j<img.getLargeur();j++){
    int c=127*(1+cos(6*M_PI*j/float(img.getLargeur())));
    for(int i=0;i<img.getHauteur();i++)
      img.Pixel(i,j)=c;
  }
}

void ecrirePnm(const Image & img, const std::string & nomFichier){
  std::ofstream os(nomFichier); // crée un flux d'entrée vers un fichier
  if (os) {
    os << "P2 " << img.getLargeur() << " " << img.getHauteur() << " 255" << std::endl;
    for(int i=0;i<img.getHauteur();i++){
      for(int j=0;j<img.getLargeur();j++)
	os << img.Pixel(i,j)<<" ";
      os << std::endl;
    }
  }
}

Image bordure(const Image & img, int couleur, int epaisseur){
  
}
