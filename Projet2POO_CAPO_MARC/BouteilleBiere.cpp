#include "BouteilleBiere.h"

BouteilleBiere::BouteilleBiere():Dechet(5, "Une bouteille en verre",
										0, "inconnue",
										BOUTEILLE, 100,
										false, true)
{
	Compteur::ajouterConstructeur();
}

BouteilleBiere::~BouteilleBiere()
{
	Compteur::ajouterDestructeur();
}
