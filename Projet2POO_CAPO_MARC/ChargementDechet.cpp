#include "ChargementDechet.h"

ChargementDechet::ChargementDechet()
{
	m_plisteDechets = nullptr;
}

ChargementDechet::ChargementDechet(list<Dechet*>* listeDechets)
{
	m_plisteDechets = listeDechets;
}

list<Dechet*>* ChargementDechet::getDechet() {
	return m_plisteDechets;
}

ChargementDechet::~ChargementDechet()
{
	delete m_plisteDechets;
}
