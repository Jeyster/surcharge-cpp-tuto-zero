#include <iostream>
#include <string>
#include "Duree.h"

#include <iostream>
#include <string>

using namespace std;

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
    if (m_secondes >= 60)
    {
        m_minutes += m_secondes / 60;
        m_secondes %= 60;
    }
    if (m_minutes >= 60)
    {
        m_heures += m_minutes / 60;
        m_minutes %= 60;
    }
}

Duree::~Duree()
{
    //dtor
}

void Duree::afficher()
{
    cout << m_heures << " heures, " << m_minutes << " minutes et " << m_secondes << " secondes." << endl;
}

bool Duree::estEgal(Duree const& duree) const
{
    return ((m_heures == duree.m_heures) && (m_minutes == duree.m_minutes) && (m_secondes == duree.m_secondes));
}
