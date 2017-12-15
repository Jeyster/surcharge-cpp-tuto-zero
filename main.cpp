#include <iostream>
#include <string>
#include "Duree.h"
#include "surcharge.h"

using namespace std;

int main()
{
    Duree duree1(1, 45, 50), duree2(1, 15, 50), duree3(2,118,120);
    duree1.afficher();
    duree2.afficher();
    duree3.afficher();

    Duree somme = duree1 + duree2;
    somme.afficher();

    somme += 3705;
    somme.afficher();

    /*
    if (duree1 == duree2)
        cout << "Les durees sont identiques";
    else
        cout << "Les durees sont differentes";
    */

    /*
    if (duree1 != duree2)
        cout << "Les durees sont differentes";
    else
        cout << "Les durees sont identiques";
    */

    /*
    if (duree1 < duree3)
    {
        cout << "Premiere duree plus petite." << endl;
    }
    else
    {
        cout << "Premiere duree n'est pas plus petite." << endl;
    }
    */

    /*
    if (duree3 > duree3)
    {
        cout << "Premiere duree plus grande." << endl;
    }
    else
    {
        cout << "Premiere duree n'est pas plus grande." << endl;
    }
    */

    /*
    if (duree3 <= duree1)
    {
        cout << "Premiere duree inferieure ou egale." << endl;
    }
    else
    {
        cout << "Premiere duree plus grande." << endl;
    }
    */

    /*
    if (duree3 >= duree1)
    {
        cout << "Premiere duree supperieure ou egale." << endl;
    }
    else
    {
        cout << "Premiere duree plus petite." << endl;
    }
    */

    return 0;
}
