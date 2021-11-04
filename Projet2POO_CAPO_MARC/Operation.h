#pragma once
#include "Dechet.h"
class Operation
{
private:
	Operation* m_operationSuivanteTrue;
	Operation* m_operationSuivanteFalse;
public:
	Operation(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	~Operation();
	virtual bool effectuerOperation(Dechet* dechet);
	Operation* getOperationSuivante(bool choix);
protected:
	Operation();
};

