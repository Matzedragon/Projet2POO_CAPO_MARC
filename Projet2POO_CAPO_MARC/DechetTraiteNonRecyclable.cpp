#include "DechetTraiteNonRecyclable.h"

DechetTraiteNonRecyclable::DechetTraiteNonRecyclable(Dechet* dechet)
{
	Compteur::ajouterConstructeur();
	m_dechet = dechet;
}

DechetTraiteNonRecyclable::DechetTraiteNonRecyclable()
{
	Compteur::ajouterConstructeur();
}
