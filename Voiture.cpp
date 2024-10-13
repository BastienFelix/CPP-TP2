#include "Voiture.hpp"

#pragma once

using namespace std;

Voiture::Voiture(int vitesseMax, int nbPlaces, int occupants) : Vehicule(vitesseMax, nbPlaces, occupants) {}

void Voiture::demarrer()
{
    try
    {
        Vehicule::demarrer();
        cout << "Démarrage voiture." << endl;
    }
    catch (const std::invalid_argument &e)
    {
        cerr << "Erreur : " << e.what() << endl;
    }
}

void Voiture::arreter()
{

    try
    {
        Vehicule::arreter();
        cout << "Arret Voiture" << endl;
    }
    catch (const std::invalid_argument &e)
    {
        cerr << "Erreur : " << e.what() << endl;
    }
}

Voiture::~Voiture() {}
