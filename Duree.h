#ifndef DUREE_H
#define DUREE_H

#include <iostream>
#include <string>

class Duree
{
    public:
        Duree(int heures = 0, int minutes = 0, int secondes =0);
        virtual ~Duree();
        void afficher() const;
        void afficher(std::ostream &flux) const;
        bool estEgal(Duree const& duree) const;
        bool estPlusPetitQue(Duree const& duree) const;
        int conversionEnSecondes() const;
        Duree& conversionSecondesEnDuree(int secondes);
        Duree& operator+=(Duree const& a);
        Duree& operator+=(int secondes);
        Duree& operator-=(Duree const& a);
        Duree& operator-=(int secondes);

    private:
        int m_heures;
        int m_minutes;
        int m_secondes;
};

#endif // DUREE_H
