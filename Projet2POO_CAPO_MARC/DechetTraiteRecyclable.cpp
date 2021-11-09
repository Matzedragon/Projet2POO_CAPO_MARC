#include "DechetTraiteRecyclable.h"

DechetTraiteRecyclable::DechetTraiteRecyclable(Dechet* dechet) : DechetTraite(dechet)
{
	Compteur::ajouterConstructeur();
}

DechetTraiteRecyclable::DechetTraiteRecyclable()
{
	Compteur::ajouterConstructeur();
}
