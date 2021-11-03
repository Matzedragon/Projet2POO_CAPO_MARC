#pragma once
#include "OperationTraitement.h"
class CreationDechetTraiteNonRecyclable : public OperationTraitement
{
public:
	CreationDechetTraiteNonRecyclable();
	CreationDechetTraiteNonRecyclable(UsineTraitement* usineTraitement);
	bool effectuerOperation(Dechet* dechet);
};
