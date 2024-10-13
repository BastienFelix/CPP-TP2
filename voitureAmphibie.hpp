#ifndef VoitureAmphibie_hpp
#define VoitureAmphibie_hpp

#include "Voiture.hpp"
#include "Bateau.hpp"
#include <stdexcept>
#include <iostream>

using namespace std;

class VoitureAmphibie : public Voiture, public Bateau
{
private:
    int vitesseMaxVoiture;
    int vitesseMaxBateau;

public:
    VoitureAmphibie(int vitesseMaxVoiture, int vitesseMaxBateau, int nbPlaces, int occupants);
    ~VoitureAmphibie();

    void demarrer() override;
    void arreter() override;

    void afficherAttributs() const;
};

#endif /* Vehicule_hpp */