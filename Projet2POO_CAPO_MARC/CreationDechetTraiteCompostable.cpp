#include "CreationDechetTraiteCompostable.h"

CreationDechetTraiteCompostable::CreationDechetTraiteCompostable()
{
}

CreationDechetTraiteCompostable::CreationDechetTraiteCompostable(UsineTraitement* usineTraitement) : OperationTraitement(usineTraitement)
{
}

bool CreationDechetTraiteCompostable::effectuerOperation(Dechet* dechet)
{
	OperationTraitement::creerDechetTraiteCompostable(dechet);
	return true;
}
