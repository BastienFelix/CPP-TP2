#include "vehicule.hpp"

#pragma once

using namespace std;

int main()
{
    Vehicule BMW_328i_e36(236, 5, 1);
    Vehicule Golf_V_1L9_TDI(185, 5, 1);

    BMW_328i_e36.demarrer();
    BMW_328i_e36.accelerer(240);

    return 0;
}