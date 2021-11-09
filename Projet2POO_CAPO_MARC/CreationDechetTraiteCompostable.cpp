#include "CreationDechetTraiteCompostable.h"

CreationDechetTraiteCompostable::CreationDechetTraiteCompostable()
{
	Compteur::ajouterConstructeur();
}

CreationDechetTraiteCompostable::CreationDechetTraiteCompostable(UsineTraitement* usineTraitement) : OperationTraitement(usineTraitement)
{
	Compteur::ajouterConstructeur();
}

CreationDechetTraiteCompostable::~CreationDechetTraiteCompostable()
{
	Compteur::ajouterDestructeur(); 
}

bool CreationDechetTraiteCompostable::effectuerOperation(Dechet* dechet)
{
	OperationTraitement::creerDechetTraiteCompostable(dechet);
	return true;
}
