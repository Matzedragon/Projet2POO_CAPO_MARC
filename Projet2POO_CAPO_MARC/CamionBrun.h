#pragma once
#include "Camion.h"
#include "DechetTraiteCompostable.h"
class CamionBrun :public Camion
{
public:
	CamionBrun(int maxCapacite);
	CamionBrun();
	bool ajouterDechet(DechetTraiteCompostable* dechetTraite);
};

