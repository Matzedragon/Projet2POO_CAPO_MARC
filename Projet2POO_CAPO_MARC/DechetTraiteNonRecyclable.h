#pragma once
#include "DechetTraite.h"
class DechetTraiteNonRecyclable : public DechetTraite
{
public:
	DechetTraiteNonRecyclable(Dechet* dechet);
	DechetTraiteNonRecyclable();
	~DechetTraiteNonRecyclable() { Compteur::ajouterDestructeur(); }
};

