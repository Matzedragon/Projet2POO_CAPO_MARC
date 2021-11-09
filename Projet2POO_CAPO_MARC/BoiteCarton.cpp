#include "BoiteCarton.h"

BoiteCarton::BoiteCarton() : Dechet(10, "Boite en carton",
									0, "inconnue",
									CARTON, 100, 
									false, false)
{
	Compteur::ajouterConstructeur();
}

BoiteCarton::~BoiteCarton()
{
	Compteur::ajouterDestructeur();
}
