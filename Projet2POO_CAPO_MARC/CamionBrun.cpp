#include "CamionBrun.h"

CamionBrun::CamionBrun(int maxCapacite) : Camion(maxCapacite)
{
}

CamionBrun::CamionBrun() : Camion()
{
}

CamionBrun::~CamionBrun()
{
}

bool CamionBrun::ajouterDechet(DechetTraiteCompostable* dechetTraite)
{
	return Camion::ajouterDechet(dechetTraite);
}
