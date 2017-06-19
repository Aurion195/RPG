#include "Guerrier.h"
#include "Personnage.h"

#include <iostream>
#include <string>

using namespace std ;

Guerrier::Guerrier(string nom) : Personnage(nom,100), degat(25), degat_spe(35), mana(25), arme("Epée en bois") 
{

} 

void Guerrier::sePresenter() const
{
   cout << "-----------------------------------------------------------------" << endl ;
   cout << "Classe : Guerrier" << endl ;
   cout << "-----------------------------------------------------------------" << endl ;
   Personnage::sePresenter();
   cout << arme << " = " << degat << " : normal	|	" << degat_spe << " : spéciale" << endl ;
   cout << "Mana = " << mana << endl ;
   cout << "-----------------------------------------------------------------" << endl ;
}

void Guerrier::attaque(Personnage& cible)
{
	cible.recevoirDegats(degat) ;
}

void Guerrier::attaque_spe(Personnage& cible)
{
	if(mana > 10)
	{
		cible.recevoirDegats(degat_spe) ;
	}
	else {cerr << "Pas assez de mana !" << endl ; return ;}
	mana -= 10 ;
}