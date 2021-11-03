#pragma once
#include "Operation.h"
class OperationTraitement : public Operation
{
private:
	UsineTraitement* m_usineTraitement;
public:
	OperationTraitement();
	OperationTraitement();
	bool effecterOperation(Dechet* dechet);
protected:
	void CreerDechetTraiteRecyclable(Dechet * dechet);
	void CreerDechetTraiteNonRecyclable(Dechet* dechet);
	void CreerDechetTraiteCompostable(Dechet* dechet);
};

