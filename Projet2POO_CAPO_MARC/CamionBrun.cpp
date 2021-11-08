#include "CamionBrun.h"

CamionBrun::CamionBrun(int maxCapacite) : Camion(maxCapacite)
{
	/* Compteur::ajouterConstructeur(); */
}

CamionBrun::CamionBrun() : Camion()
{
	/* Compteur::ajouterConstructeur(); */
}

CamionBrun::~CamionBrun()
{
}

bool CamionBrun::ajouterDechet(DechetTraiteCompostable* dechetTraite)
{
	return Camion::ajouterDechet(dechetTraite);
}
