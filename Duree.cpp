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

bool Duree::estPlusPetitQue(Duree const& duree) const
{
    return ((m_heures*3600 + m_minutes*60 + m_secondes) < (duree.m_heures*3600 + duree.m_minutes*60 + duree.m_secondes));
}

Duree& Duree::operator+=(Duree const& a)
{
    m_heures = m_heures + a.m_heures + (m_minutes + a.m_minutes + ((m_secondes + a.m_secondes) / 60)) / 60;
    m_minutes = (m_minutes + a.m_minutes + ((m_secondes + a.m_secondes) / 60)) % 60;
    m_secondes = (m_secondes + a.m_secondes) % 60;

    return *this;
}

Duree& Duree::operator+=(int secondes)
{
    Duree duree(0,0,secondes);
    *this += duree;

    /*
    m_secondes += secondes;
    m_minutes += m_secondes / 60;

    m_secondes %= 60;
    m_heures += m_minutes / 60;
    m_minutes %= 60;
    */

    return *this;
}

Duree& Duree::operator-=(Duree const& a)
{
    m_heures = m_heures + a.m_heures + (m_minutes + a.m_minutes + ((m_secondes + a.m_secondes) / 60)) / 60;
    m_minutes = (m_minutes + a.m_minutes + ((m_secondes + a.m_secondes) / 60)) % 60;
    m_secondes = (m_secondes + a.m_secondes) % 60;

    return *this;
}

/* !!! BUG si *this < secondes !!!*/
Duree& Duree::operator-=(int secondes)
{
    m_secondes -= secondes;

    if (m_secondes < 0)
    {
        if (m_secondes % 60 != 0)
        {
            m_minutes += m_secondes / 60 - 1;
            m_secondes = 60 + m_secondes % 60;
        }
        else
        {
            m_minutes += m_secondes / 60;
            m_secondes = m_secondes % 60;
        }

        if (m_minutes < 0)
        {
            if (m_minutes % 60 != 0)
            {
                m_heures += m_minutes / 60 - 1;
                m_minutes = 60 + m_minutes % 60;
            }
            else
            {
                m_heures += m_minutes / 60;
                m_minutes = m_minutes % 60;
            }
        }
    }

    return *this;
}
