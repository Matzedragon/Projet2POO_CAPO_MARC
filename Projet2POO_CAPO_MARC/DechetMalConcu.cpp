#include "DechetMalConcu.h"

DechetMalConcu::DechetMalConcu() : Dechet(	0, "Un déchet mal concu",
											0, "inconnue",
											INCONNU, 100,
											false, false)
{
	Compteur::ajouterConstructeur();
}

DechetMalConcu::~DechetMalConcu()
{
	Compteur::ajouterDestructeur();
}
