#include "Operation1.h"

Operation1::Operation1() {}

Operation1::~Operation1()
{
}

Operation1::Operation1(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) : Operation(operationSuivanteTrue, operationSuivanteFalse) {}
