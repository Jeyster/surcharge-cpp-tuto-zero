#include <iostream>
#include <string>
#include "Duree.h"
#include "surcharge.h"

using namespace std;

bool operator==(Duree const& a, Duree const& b)
{
    return a.estEgal(b);
}
