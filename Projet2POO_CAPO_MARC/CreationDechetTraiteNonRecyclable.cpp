#include "CreationDechetTraiteNonRecyclable.h"

CreationDechetTraiteNonRecyclable::CreationDechetTraiteNonRecyclable()
{
	Compteur::ajouterConstructeur();

}

CreationDechetTraiteNonRecyclable::CreationDechetTraiteNonRecyclable(UsineTraitement* usineTraitement) : OperationTraitement(usineTraitement)
{
	Compteur::ajouterConstructeur();
}

CreationDechetTraiteNonRecyclable::~CreationDechetTraiteNonRecyclable()
{
	Compteur::ajouterDestructeur();
}

bool CreationDechetTraiteNonRecyclable::effectuerOperation(Dechet* dechet)
{
	OperationTraitement::creerDechetTraiteNonRecyclable(dechet);
	return true;
}
