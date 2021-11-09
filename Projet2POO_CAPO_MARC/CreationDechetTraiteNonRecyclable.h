#pragma once
#include "OperationTraitement.h"
class CreationDechetTraiteNonRecyclable : public OperationTraitement
{
public:
	CreationDechetTraiteNonRecyclable();
	CreationDechetTraiteNonRecyclable(UsineTraitement* usineTraitement);
	~CreationDechetTraiteNonRecyclable();
	bool effectuerOperation(Dechet* dechet);
};
