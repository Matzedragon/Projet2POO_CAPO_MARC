#include "Operation.h"

Operation::Operation()
{
}

Operation::Operation(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse)
{
	m_operationSuivanteTrue = operationSuivanteTrue;
	m_operationSuivanteFalse = operationSuivanteFalse;
}

Operation::~Operation()
{
	delete m_operationSuivanteFalse;
	delete m_operationSuivanteTrue;
}

bool Operation::effecterOperation(Dechet* dechet)
{
	return false;
}

Operation* Operation::getOperationSuivante(bool choix)
{
	return nullptr;
}
