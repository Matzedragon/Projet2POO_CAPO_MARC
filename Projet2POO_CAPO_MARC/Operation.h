#pragma once
#include "Dechet.h"
class Operation
{
private:
	Operation* m_operationSuivanteTrue;
	Operation* m_operationSuivanteFalse;
public:
	Operation();
	Operation(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	~Operation();
	bool effecterOperation(Dechet* dechet);
	Operation* getOperationSuivante(bool choix);
protected:
	Operation();
};

