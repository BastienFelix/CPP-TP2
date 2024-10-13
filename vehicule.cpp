#include "vehicule.hpp"

#pragma once

using namespace std;

Vehicule::Vehicule(int vitesseMax, int nbPlaces, int occupants) : vitesseMax_(vitesseMax), nbPlaces_(nbPlaces), occupants_(occupants) {}

void Vehicule::mettreEnPanne(double random)
{
    try
    {
        if (random < 0 || random > 1)
        {
            throw std::invalid_argument("Le nombre aléatoire doit être compris entre 0 et 1.");
        }
        else
        {
            if (random < 0.5)
            {
                etat_ = PANNE_LEGERE;
            }
            else
            {
                etat_ = PANNE_SEVERE;
            }
        }
    }
    catch (const std::invalid_argument &e)
    {
        cout << "Erreur :" << e.what() << endl;
    }
}

string Vehicule::getEtat() const
{
    cout << etat_ << endl;
}

void Vehicule::accelerer(int increment)
{
    try
    {
        vitesse_ += increment;
        if (vitesse_ < 0)
        {
            throw string("Vitesse négative ! Vitesse miniumum = 0");
            vitesse_ = 0;
        }
        else if (vitesse_ > vitesseMax_)
        {
            throw string("Vitesse supérieure à la vitesse maximale ! Vitesse maximum = " + to_string(vitesseMax_));
            vitesse_ = vitesseMax_;
        }
    }
    catch (std::string const &err_msg)
    {
        cerr << "Exception: " << err_msg << endl;
    }
}

void Vehicule::demarrer()
{
    try
    {
        if (etat_ == MARCHE)
        {
            throw std::invalid_argument("Le vehicule est déja en marche.");
        }
        else if (etat_ == PANNE_SEVERE)
        {
            throw std::invalid_argument("Le vehicule est en panne");
        }
        else
        {
            vitesse_ = 0;
            etat_ = MARCHE;
        }
    }
    catch (const std::invalid_argument &err_msg)
    {
        cout << "Erreur :" << err_msg.what() << endl;
    }
}

void Vehicule::monter(int nbOcc)
{
    try
    {
        occupants_ += nbOcc;
        if (occupants_ > nbPlaces_)
        {
            throw string("Nombre d'occupants supérieur au nombre de places ! Nombre de places = " + to_string(nbPlaces_));
            occupants_ = nbPlaces_;
        }
    }
    catch (std::string const &err_msg)
    {
        cerr << "Exception: " << err_msg << endl;
    }
}

void Vehicule::descendre(int nbOcc)
{
    try
    {
        occupants_ -= nbOcc;
        if (occupants_ < 1)
        {
            throw string("Nombre d'occupants inferieur à 1 ! Nombre d'occupants minimum = 1, ce n'est pas encore le futur !");
            occupants_ = 0;
        }
    }
    catch (std::string const &err_msg)
    {
        cerr << "Exception: " << err_msg << endl;
    }
}

void Vehicule::arreter()
{
    try
    {
        if (etat_ == ARRET)
        {
            throw std::invalid_argument("Le vehicule est déjà à l'arrêt.");
        }
        else
        {
            etat_ = ARRET;
            vitesse_ = 0;
        }
    }
    catch (const std::invalid_argument &e)
    {
        cout << "Erreur :" << e.what() << endl;
    }
}

void Vehicule::depanner()
{
    try
    {
        if (etat_ != PANNE_LEGERE && etat_ != PANNE_SEVERE)
        {
            throw std::invalid_argument("Le vehicule n'est pas en panne.");
        }
    }
    catch (std::string const *e)
    {
        cout << "Erreur :" << e << endl;
    }
    etat_ = ARRET;
}

Vehicule::~Vehicule()
{
}