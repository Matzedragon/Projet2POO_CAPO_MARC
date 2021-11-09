#include "CamionVert.h"

CamionVert::CamionVert(int maxCapacite) : Camion(maxCapacite)
{
	Compteur::ajouterConstructeur();
}

CamionVert::CamionVert() : Camion()
{
	Compteur::ajouterConstructeur();
}

CamionVert::~CamionVert()
{
	Compteur::ajouterDestructeur();
}

bool CamionVert::ajouterDechet(DechetTraiteNonRecyclable* dechetTraite) 
{
	return Camion::ajouterDechet(dechetTraite);
}
