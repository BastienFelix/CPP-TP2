#include "Voiture.hpp"
#include "Bateau.hpp"

#pragma once

using namespace std;

int main()
{
    Voiture voiture(180, 5, 1);
    Bateau bateau(50, 2, 1);

    voiture.afficherAttributs();

    return 0;
}