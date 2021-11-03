#include "CreationDechetTraiteRecyclable.h"

CreationDechetTraiteRecyclable::CreationDechetTraiteRecyclable()
{
}

CreationDechetTraiteRecyclable::CreationDechetTraiteRecyclable(UsineTraitement* usineTraitement) : OperationTraitement(usineTraitement)
{
}

bool CreationDechetTraiteRecyclable::effectuerOperation(Dechet* dechet)
{
	OperationTraitement::creerDechetTraiteRecyclable(dechet);
	return true;
}
