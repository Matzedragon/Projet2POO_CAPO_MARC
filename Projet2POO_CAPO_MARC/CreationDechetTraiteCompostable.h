#pragma once
#include "OperationTraitement.h"
class CreationDechetTraiteCompostable : public OperationTraitement
{
public:
	CreationDechetTraiteCompostable();
	CreationDechetTraiteCompostable(UsineTraitement* usineTraitement);
	bool effectuerOperation(Dechet* dechet);
};

