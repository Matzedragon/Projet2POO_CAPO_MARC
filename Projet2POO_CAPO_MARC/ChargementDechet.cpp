#include "ChargementDechet.h"

ChargementDechet::ChargementDechet()
{
	m_plisteDechets = nullptr;
}

ChargementDechet::ChargementDechet(list<Dechet*>* listeDechets)
{
	m_plisteDechets = listeDechets;
}

ChargementDechet::~ChargementDechet()
{
	delete m_plisteDechets;
}
