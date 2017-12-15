#include <iostream>
#include <string>
#include "Duree.h"
#include "surcharge.h"

using namespace std;

bool operator==(Duree const& a, Duree const& b)
{
    return a.estEgal(b);
}

bool operator!=(Duree const& a, Duree const& b)
{
    return !(a==b);
}

bool operator<(Duree const& a, Duree const& b)
{
    return a.estPlusPetitQue(b);
}

bool operator>(Duree const& a, Duree const& b)
{
    return !((a<b) || (a==b));
}

bool operator<=(Duree const& a, Duree const& b)
{
    return !(a>b);
}

bool operator>=(Duree const& a, Duree const& b)
{
    return !(a<b);
}

Duree operator+(Duree const& a, Duree const& b)
{
    Duree copie(a);
    copie += b;
    return copie;
}

Duree operator+(Duree const& duree, int secondes)
{
    Duree copie(duree);
    copie += secondes;
    return copie;
}
