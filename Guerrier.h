#ifndef DEF_GUERRIER
#define DEF_GUERRIER
 
#include <iostream>
#include <string>
#include "Personnage.h"
 
class Guerrier : public Personnage
{
	int degat ;
	int degat_spe ;
	int mana ;
	std::string arme ;

    public:
    	Guerrier(std::string nom) ;
        void sePresenter() const ;
        void attaque(Personnage& cible) ;
        void attaque_spe(Personnage& cible) ;
};
 
#endif