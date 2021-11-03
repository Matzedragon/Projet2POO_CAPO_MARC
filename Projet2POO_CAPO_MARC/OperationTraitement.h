#pragma once
#include "Operation.h"
#include "UsineTraitement.h"
class OperationTraitement : public Operation
{
private:
	UsineTraitement* m_usineTraitement;
	friend class UsineTraitement;
public:
	OperationTraitement();
	OperationTraitement(UsineTraitement* usineTraitement);
	~OperationTraitement() { delete m_usineTraitement; }
	bool effecterOperation(Dechet* dechet);
protected:
	void creerDechetTraiteRecyclable(Dechet * dechet);
	void creerDechetTraiteNonRecyclable(Dechet* dechet);
	void creerDechetTraiteCompostable(Dechet* dechet);
};

