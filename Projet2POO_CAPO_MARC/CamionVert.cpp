#include "CamionVert.h"

CamionVert::CamionVert(int maxCapacite) : Camion(maxCapacite)
{
}

CamionVert::CamionVert() : Camion()
{
}

CamionVert::~CamionVert()
{
}

bool CamionVert::ajouterDechet(DechetTraiteNonRecyclable* dechetTraite) 
{
	return Camion::ajouterDechet(dechetTraite);
}
