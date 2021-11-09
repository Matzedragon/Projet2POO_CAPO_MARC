#include "CreationDechetTraiteRecyclable.h"
CreationDechetTraiteRecyclable::CreationDechetTraiteRecyclable()
{
	Compteur::ajouterConstructeur();
}

CreationDechetTraiteRecyclable::CreationDechetTraiteRecyclable(UsineTraitement* usineTraitement) : OperationTraitement(usineTraitement)
{
	Compteur::ajouterConstructeur();
}

CreationDechetTraiteRecyclable::~CreationDechetTraiteRecyclable()
{
	Compteur::ajouterDestructeur();
}

bool CreationDechetTraiteRecyclable::effectuerOperation(Dechet* dechet)
{
	OperationTraitement::creerDechetTraiteRecyclable(dechet);
	return true;
}
