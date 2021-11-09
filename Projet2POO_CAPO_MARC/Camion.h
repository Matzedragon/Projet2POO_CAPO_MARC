#pragma once
#include <stack>
#include "DechetTraite.h"
using namespace std;

class Camion
{
private:
	int m_maxCapacite;
	int m_capacite;
	stack<DechetTraite*> m_pileDechets;
public:
	Camion(int maxCapacite);
	Camion();
	virtual ~Camion();
	bool ajouterDechet(DechetTraite* dechetTraite);
	int viderCamion();
};

