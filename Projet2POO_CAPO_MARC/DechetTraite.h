#pragma once
#include "Dechet.h"
class DechetTraite
{
protected:
	Dechet* m_dechet;
public:
	DechetTraite(Dechet* dechet);
	DechetTraite();
	~DechetTraite();
	Dechet const* getDechet() {return m_dechet;}
};

