#include "CreationDechetTraiteNonRecyclable.h"

CreationDechetTraiteNonRecyclable::CreationDechetTraiteNonRecyclable()
{
}

CreationDechetTraiteNonRecyclable::CreationDechetTraiteNonRecyclable(UsineTraitement* usineTraitement) : OperationTraitement(usineTraitement)
{
}

bool CreationDechetTraiteNonRecyclable::effectuerOperation(Dechet* dechet)
{
	OperationTraitement::creerDechetTraiteNonRecyclable(dechet);
	return true;
}
