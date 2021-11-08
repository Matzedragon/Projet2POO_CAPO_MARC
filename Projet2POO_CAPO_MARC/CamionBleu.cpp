#include "CamionBleu.h"

CamionBleu::CamionBleu(int maxCapacite) : Camion(maxCapacite)
{
}

CamionBleu::CamionBleu() : Camion()
{
}

CamionBleu::~CamionBleu()
{
}

bool CamionBleu::ajouterDechet(DechetTraiteRecyclable* dechetTraite)
{
	return Camion::ajouterDechet(dechetTraite);
}
