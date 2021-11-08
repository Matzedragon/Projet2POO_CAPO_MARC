#pragma once
#include "Operation.h"
class UsineTraitement;
class OperationTraitement : public Operation
{
private:
	UsineTraitement* m_usineTraitement;
	friend class UsineTraitement;
public:
	OperationTraitement();
	OperationTraitement(UsineTraitement* usineTraitement);
	~OperationTraitement() { }
	bool effectuerOperation(Dechet* dechet);
protected:
	void creerDechetTraiteRecyclable(Dechet * dechet);
	void creerDechetTraiteNonRecyclable(Dechet* dechet);
	void creerDechetTraiteCompostable(Dechet* dechet);
};

