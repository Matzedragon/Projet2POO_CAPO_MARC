#pragma once
#include "Operation.h"
class OperationTraitement : public Operation
{
private:
	UsineTraitement* m_usineTraitement;
public:
	OperationTraitement();
	~OperationTraitement() { delete m_usineTraitement; }
	bool effecterOperation(Dechet* dechet);
protected:
	void CreerDechetTraiteRecyclable(Dechet * dechet);
	void CreerDechetTraiteNonRecyclable(Dechet* dechet);
	void CreerDechetTraiteCompostable(Dechet* dechet);
};

