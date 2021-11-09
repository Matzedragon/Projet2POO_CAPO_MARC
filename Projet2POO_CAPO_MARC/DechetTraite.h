#pragma once
#include "Dechet.h"
class DechetTraite
{
protected:
	Dechet* m_dechet;
public:
	DechetTraite(Dechet* dechet);
	DechetTraite();
	virtual ~DechetTraite();
	Dechet const* getDechet() {return m_dechet;}
};

