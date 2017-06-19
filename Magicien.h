#ifndef DEF_MAGICIEN
#define DEF_MAGICIEN
 
#include <iostream>
#include <string>
#include "Personnage.h"
 
class Magicien : public Personnage
{
	std::string name ;
	int degat ;
	int degat_spe ;
	int mana ;
	std::string arme ;

    public:
    	Magicien(std::string nom) ;
        //void bouleDeFeu() const;
        //void bouleDeGlace() const;
        void sePresenter() const ;
};
 
#endif