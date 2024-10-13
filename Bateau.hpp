#ifndef Bateau_hpp
#define Bateau_hpp

#include <stdexcept>
#include <iostream>
#include "vehicule.hpp"

using namespace std;

class Bateau : virtual public Vehicule
{
protected:
    Bateau(int vitesseMax = 0, int nbPlaces = 1, int occupants = 0);
    ~Bateau();

private:
    void demarrer() override;
    void arreter() override;
};

#endif