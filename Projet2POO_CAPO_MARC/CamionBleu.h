#pragma once
#include "Camion.h"
#include "DechetTraiteRecyclable.h"
class CamionBleu :public Camion
{
public:
	CamionBleu(int maxCapacite);
	CamionBleu();
	~CamionBleu();
	bool ajouterDechet(DechetTraiteRecyclable* dechetTraite);

};

