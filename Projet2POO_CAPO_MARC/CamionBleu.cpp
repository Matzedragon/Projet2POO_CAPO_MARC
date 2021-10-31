#include "CamionBleu.h"

CamionBleu::CamionBleu(int maxCapacite) : Camion(maxCapacite)
{
}

CamionBleu::CamionBleu() : Camion()
{
}

bool CamionBleu::ajouterDechet(DechetTraiteRecyclable* dechetTraite)
{
	return Camion::ajouterDechet(dechetTraite);
}
