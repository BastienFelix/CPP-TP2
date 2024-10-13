#include "voitureAmphibie.hpp"

#pragma once

using namespace std;

VoitureAmphibie::VoitureAmphibie(int vitesseMaxVoiture, int vitesseMaxBateau, int nbPlaces, int occupants) : Voiture(vitesseMaxVoiture, nbPlaces, occupants), Bateau(vitesseMaxBateau, nbPlaces, occupants) {}

void VoitureAmphibie::afficherAttributs() const
{
    cout << "Vitesse max voiture : " << vitesseMaxVoiture << endl;
    cout << "Vitesse max bateau : " << vitesseMaxBateau << endl;
}

VoitureAmphibie::~VoitureAmphibie() {}

void VoitureAmphibie::demarrer()
{
    cout << "Démarrage voiture amphibie." << endl;
}

void VoitureAmphibie::arreter()
{
    cout << "Arret voiture amphibie" << endl;
}