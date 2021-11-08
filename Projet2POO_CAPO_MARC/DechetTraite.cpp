#include "DechetTraite.h"

DechetTraite::DechetTraite(Dechet* dechet)
{
	/* Compteur::ajouterConstructeur(); */
	m_dechet = dechet;
}

DechetTraite::DechetTraite()
{
	/* Compteur::ajouterConstructeur(); */
	m_dechet = NULL;
}

DechetTraite::~DechetTraite()
{
	delete m_dechet;
}
