#pragma once
#include "Operation.h"
class Operation3 : public Operation
{
public:
	Operation3(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	Operation3();
	bool effecterOperation(Dechet* dechet);
	~Operation3();
};
