#pragma once
#include "OperationTraitement.h"
class CreationDechetTraiteRecyclable : public OperationTraitement
{
public:
	CreationDechetTraiteRecyclable();
	CreationDechetTraiteRecyclable(UsineTraitement* usineTraitement);
	~CreationDechetTraiteRecyclable() { }
	bool effectuerOperation(Dechet* dechet);
};
