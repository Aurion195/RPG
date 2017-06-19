#include "Personnage.h"
#include "Personnage.cpp"

#include "Guerrier.h"
#include "Guerrier.cpp"

#include "Magicien.h"
#include "Magicien.cpp"

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std ;

int main()
{
   Guerrier marcel("Marcel");
   Magicien gandal("Gandalf") ;

   marcel.sePresenter();
   gandal.sePresenter() ;

   marcel.attaque_spe(gandal) ;

   system("clear") ;

   gandal.sePresenter() ;
   marcel.sePresenter() ;
   return 0;
}