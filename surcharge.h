#ifndef SURCHARGE_H
#define SURCHARGE_H

#include <iostream>
#include <string>

bool operator==(Duree const& a, Duree const& b);
bool operator!=(Duree const& a, Duree const& b);
bool operator<(Duree const& a, Duree const& b);
bool operator>(Duree const& a, Duree const& b);
bool operator<=(Duree const& a, Duree const& b);
bool operator>=(Duree const& a, Duree const& b);
Duree operator+(Duree const& a, Duree const& b);
Duree operator+(Duree const& duree, int secondes);

#endif // SURCHARGE_H
