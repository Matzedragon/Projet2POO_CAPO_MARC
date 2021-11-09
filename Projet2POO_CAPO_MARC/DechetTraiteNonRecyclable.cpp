#include "DechetTraiteNonRecyclable.h"

DechetTraiteNonRecyclable::DechetTraiteNonRecyclable(Dechet* dechet) : DechetTraite(dechet)
{
	Compteur::ajouterConstructeur();
}

DechetTraiteNonRecyclable::DechetTraiteNonRecyclable()
{
	Compteur::ajouterConstructeur();
}
