#include "CamionVert.h"

CamionVert::CamionVert(int maxCapacite) : Camion(maxCapacite)
{
}

CamionVert::CamionVert() : Camion()
{
}

bool CamionVert::ajouterDechet(DechetTraiteNonRecyclable* dechetTraite) 
{
	return Camion::ajouterDechet(dechetTraite);
}
