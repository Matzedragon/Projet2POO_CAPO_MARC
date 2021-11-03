#pragma once
#include "OperationTraitement.h"
class CreationDechetTraiteRecyclable : public OperationTraitement
{
public:
	CreationDechetTraiteRecyclable();
	CreationDechetTraiteRecyclable(UsineTraitement* usineTraitement);
	bool effectuerOperation(Dechet* dechet);
};
