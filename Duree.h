#ifndef DUREE_H
#define DUREE_H

#include <iostream>
#include <string>

class Duree
{
    public:
        Duree(int heures = 0, int minutes = 0, int secondes =0);
        virtual ~Duree();
        void afficher();
        bool estEgal(Duree const& duree) const;

    private:

        int m_heures;
        int m_minutes;
        int m_secondes;
};

#endif // DUREE_H