#ifndef FIGURA_HH
#define FIGURA_HH
#include "Wektor3D.hh"
#include <iostream>

class Figura
{
std::vector<Wektor3D> wierzcholki;

public:
Wektor3D getWierzcholki(int i)
{
    return wierzcholki[i];
}
std::vector<Wektor3D> getWierzcholki()
{
  return wierzcholki;
}
int getSize()
{
    return wierzcholki.size();
}
};
std::ostream& operator<<(std::ostream &Strm,Figura Fig);
#endif