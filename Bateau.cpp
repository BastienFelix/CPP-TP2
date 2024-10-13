#include "Bateau.hpp"

#pragma once

using namespace std;


Bateau::Bateau(int vitesseMax, int nbPlaces, int occupants) : Vehicule(vitesseMax, nbPlaces, occupants) {}



void Bateau::demarrer() {
    try {
        Vehicule::demarrer(); 
        cout << "Démarrage Bateau." << endl;
    }
    catch (const std::invalid_argument& e) {
        cerr << "Erreur : " << e.what() << endl;
    }
}


void Bateau::arreter() 
{

try{
        Vehicule::arreter();
        cout<<"Arret Bateau" << endl;
    }
    catch(const std::invalid_argument& e)
    {
        cerr << "Erreur : " << e.what() << endl;
    }

}
      
Bateau::~Bateau() {}


