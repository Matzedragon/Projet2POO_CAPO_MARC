#pragma once
#include "DechetTraite.h"
class DechetTraiteRecyclable : public DechetTraite
{
public:
	DechetTraiteRecyclable(Dechet* dechet);
	DechetTraiteRecyclable();
	~DechetTraiteRecyclable() {}
};

