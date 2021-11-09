#include "ChargementDechet.h"

ChargementDechet::ChargementDechet()
{
	Compteur::ajouterConstructeur();
	m_plisteDechets = nullptr;
}

ChargementDechet::ChargementDechet(list<Dechet*>* listeDechets)
{
	Compteur::ajouterConstructeur();
	m_plisteDechets = listeDechets;
}

list<Dechet*>* ChargementDechet::getDechet() const {
	return m_plisteDechets;
}

ChargementDechet::~ChargementDechet()
{
	Compteur::ajouterDestructeur();
	while (!m_plisteDechets->empty()) {
		delete m_plisteDechets->front(),m_plisteDechets->pop_front();
	}
	delete m_plisteDechets;
}
