#include "CamionBleu.h"

CamionBleu::CamionBleu(int maxCapacite) : Camion(maxCapacite)
{
	/* Compteur::ajouterConstructeur(); */
}

CamionBleu::CamionBleu() : Camion()
{
	/* Compteur::ajouterConstructeur(); */
}

CamionBleu::~CamionBleu()
{
}

bool CamionBleu::ajouterDechet(DechetTraiteRecyclable* dechetTraite)
{
	return Camion::ajouterDechet(dechetTraite);
}
