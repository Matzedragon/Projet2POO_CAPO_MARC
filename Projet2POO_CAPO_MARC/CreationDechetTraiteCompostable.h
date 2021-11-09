#pragma once
#include "OperationTraitement.h"
class CreationDechetTraiteCompostable : public OperationTraitement
{
public:
	CreationDechetTraiteCompostable();
	CreationDechetTraiteCompostable(UsineTraitement* usineTraitement);
	~CreationDechetTraiteCompostable();
	bool effectuerOperation(Dechet* dechet);
};

