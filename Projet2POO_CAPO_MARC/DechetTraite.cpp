#include "DechetTraite.h"

DechetTraite::DechetTraite(Dechet* dechet)
{
	m_dechet = dechet;
}

DechetTraite::DechetTraite()
{
	m_dechet = NULL;
}

DechetTraite::~DechetTraite()
{
	delete m_dechet;
}
