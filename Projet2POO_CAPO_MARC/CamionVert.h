#pragma once
#include "Camion.h"
#include "DechetTraiteNonRecyclable.h"
class CamionVert :public Camion
{
public:
	CamionVert(int maxCapacite);
	CamionVert();
	~CamionVert();
	bool ajouterDechet(DechetTraiteNonRecyclable* dechetTraite);
};

