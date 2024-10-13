#ifndef Voiture_hpp
#define Voiture_hpp

#include <stdexcept>
#include <iostream>
#include "vehicule.hpp"

using namespace std;

class Voiture : virtual public Vehicule 
{
protected :
    Voiture(int vitesseMax = 0, int nbPlaces = 1, int occupants = 0);
    ~Voiture();

private :

    void demarrer() override;
    void arreter() override;



};


#endif