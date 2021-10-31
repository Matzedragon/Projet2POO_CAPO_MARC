#include "Camion.h"

Camion::Camion(int maxCapacite)
{
	m_maxCapacite = maxCapacite;
	m_capacite = 0;
}

Camion::Camion()
{
	m_maxCapacite = 80;
	m_capacite = 0;
}

Camion::~Camion()
{
}

bool Camion::ajouterDechet(DechetTraite* dechetTraite)
{
	bool wasAdded = false;
	// si il reste au moins une place
	if (m_capacite < m_maxCapacite) {
		m_pileDechets.push(dechetTraite);
		m_capacite++;
		wasAdded = true;
	}
	else {
		wasAdded = false;
	}
	return wasAdded;
}

int Camion::viderCamion()
{
	int poidsTot =0;
	while (!m_pileDechets.empty()) {
		poidsTot += m_pileDechets.top()->getDechet()->getPoids();
		m_pileDechets.pop();
	}
	return poidsTot;
}
