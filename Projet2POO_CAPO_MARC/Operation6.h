#pragma once
#include "Operation.h"
class Operation6 : public Operation
{
public:
	Operation6(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	Operation6();
	~Operation6();
};
