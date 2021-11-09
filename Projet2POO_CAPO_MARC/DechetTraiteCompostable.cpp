#include "DechetTraiteCompostable.h"

DechetTraiteCompostable::DechetTraiteCompostable(Dechet* dechet)
{
	Compteur::ajouterConstructeur();
	m_dechet = dechet;
}

DechetTraiteCompostable::DechetTraiteCompostable()
{
	Compteur::ajouterConstructeur();
}
