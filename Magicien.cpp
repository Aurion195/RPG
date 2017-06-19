#include "Magicien.h"
#include "Personnage.h"

#include <iostream>
#include <string>

using namespace std ;

Magicien::Magicien(string nom) : Personnage(nom,50), degat(25), degat_spe(45), mana(50), arme("Baton en bois")
{
	
} 

void Magicien::sePresenter() const
{
   cout << "-----------------------------------------------------------------" << endl ;
   cout << "Classe : Magicien" << endl ;
   cout << "-----------------------------------------------------------------" << endl ;
   Personnage::sePresenter() ;
   cout << arme << " = " << degat << " : normal	|	" << degat_spe << " : spéciale" << endl ;
   cout << "Mana = " << mana << endl ;
   cout << "-----------------------------------------------------------------" << endl ;
}