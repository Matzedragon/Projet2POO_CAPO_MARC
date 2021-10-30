#pragma once
#include "Dechet.h"
#include <list>

class ChargementDechet
{
private:
	list<Dechet*>* m_plisteDechets;

public:
	ChargementDechet();
	ChargementDechet(list<Dechet*>* listeDechets);
	~ChargementDechet();
};

