#include "Personnage.h"
#include "Guerrier.h"
#include "Magicien.h"
 
#include <iostream>
#include <string>

using namespace std;
 
Personnage::Personnage(string nom, int life) : m_vie(life), m_nom(nom)
{
 
}
 
void Personnage::recevoirDegats(int degat)
{
    m_vie -= degat;
}
 
void Personnage::coupDePoing(Personnage &cible)
{
    cible.recevoirDegats(degat);
}

void Personnage::sePresenter() const
{
    cout << "Nom = " << m_nom << endl;
    cout << "Vie = " << m_vie << endl;
}