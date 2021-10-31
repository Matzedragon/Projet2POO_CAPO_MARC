#include "CamionBrun.h"

CamionBrun::CamionBrun(int maxCapacite) : Camion(maxCapacite)
{
}

CamionBrun::CamionBrun() : Camion()
{
}

bool CamionBrun::ajouterDechet(DechetTraiteCompostable* dechetTraite)
{
	return Camion::ajouterDechet(dechetTraite);
}
