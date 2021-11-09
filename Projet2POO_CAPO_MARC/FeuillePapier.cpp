#include "FeuillePapier.h"

FeuillePapier::FeuillePapier() : Dechet(	1, "Une feuille de papier",
											0, "inconnue",
											PAPIER, 100,
											false, false)
{
	Compteur::ajouterConstructeur();
}

FeuillePapier::~FeuillePapier()
{
	Compteur::ajouterDestructeur();
}
