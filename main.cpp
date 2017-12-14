#include <iostream>
#include <string>
#include "Duree.h"
#include "surcharge.h"

using namespace std;

int main()
{
    Duree duree1(0, 10, 28), duree2(0, 10, 28), duree3(2,118,120);
    duree1.afficher();
    duree2.afficher();
    duree3.afficher();

    if (duree1 == duree2)
        cout << "Les durees sont identiques";
    else
        cout << "Les durees sont differentes";

    return 0;
}
