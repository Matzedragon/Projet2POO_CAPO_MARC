#include "DechetTraiteCompostable.h"

DechetTraiteCompostable::DechetTraiteCompostable(Dechet* dechet) : DechetTraite(dechet)
{
	Compteur::ajouterConstructeur();
}

DechetTraiteCompostable::DechetTraiteCompostable()
{
	Compteur::ajouterConstructeur();
}
