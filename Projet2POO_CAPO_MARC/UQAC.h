#pragma once
#include "ChargementDechet.h"
class UQAC
{
public:
	UQAC();
	~UQAC() { Compteur::ajouterDestructeur(); }
	static ChargementDechet* getChargementDechet();

};

