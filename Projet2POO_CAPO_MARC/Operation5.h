#pragma once
#include "Operation.h"
class Operation5 : public Operation
{
public:
	Operation5(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	Operation5();
	bool effecterOperation(Dechet* dechet);
	~Operation5();
};
