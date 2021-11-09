#include "DechetTraiteRecyclable.h"

DechetTraiteRecyclable::DechetTraiteRecyclable(Dechet* dechet)
{

	Compteur::ajouterConstructeur();
	m_dechet = dechet;
}

DechetTraiteRecyclable::DechetTraiteRecyclable()
{
	Compteur::ajouterConstructeur();
}
