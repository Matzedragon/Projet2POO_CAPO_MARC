#include "CreationDechetTraiteRecyclable.h"
CreationDechetTraiteRecyclable::CreationDechetTraiteRecyclable()
{
	/* Compteur::ajouterConstructeur(); */
}

CreationDechetTraiteRecyclable::CreationDechetTraiteRecyclable(UsineTraitement* usineTraitement) : OperationTraitement(usineTraitement)
{
	/* Compteur::ajouterConstructeur(); */
}

bool CreationDechetTraiteRecyclable::effectuerOperation(Dechet* dechet)
{
	OperationTraitement::creerDechetTraiteRecyclable(dechet);
	return true;
}
