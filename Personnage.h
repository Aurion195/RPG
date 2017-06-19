#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE
 
#include <iostream>


class Personnage
{
	int m_vie ;
	int degat ;
    std::string m_nom;
        
    public:
        Personnage();
        Personnage(std::string nom, int life);
        void recevoirDegats(int degat);
        void coupDePoing(Personnage& cible);

        void sePresenter() const;
};
#endif