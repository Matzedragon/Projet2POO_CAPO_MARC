#pragma once
#include "Operation.h"
class Operation1 : public Operation
{
public:
	Operation1(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	Operation1();
	bool effecterOperation(Dechet* dechet);
	~Operation1();
};

