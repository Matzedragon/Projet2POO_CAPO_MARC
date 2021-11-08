#include "ChargementDechet.h"

ChargementDechet::ChargementDechet()
{
	/* Compteur::ajouterConstructeur(); */
	m_plisteDechets = nullptr;
}

ChargementDechet::ChargementDechet(list<Dechet*>* listeDechets)
{
	/* Compteur::ajouterConstructeur(); */
	m_plisteDechets = listeDechets;
}

list<Dechet*>* ChargementDechet::getDechet() {
	return m_plisteDechets;
}

ChargementDechet::~ChargementDechet()
{
	delete m_plisteDechets;
}
