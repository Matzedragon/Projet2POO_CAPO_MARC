#include "Operation.h"

Operation::Operation()
{
	m_operationSuivanteTrue = nullptr;
	m_operationSuivanteFalse = nullptr;
}

Operation::Operation(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse)
{
	m_operationSuivanteTrue = operationSuivanteTrue;
	m_operationSuivanteFalse = operationSuivanteFalse;
}

Operation::~Operation()
{
}

bool Operation::effectuerOperation(Dechet* dechet)
{
	return false;
}

Operation* Operation::getOperationSuivante(bool choix)
{
	if (choix == true) {
		return m_operationSuivanteTrue;
	}
	else if (choix == false) {
		return m_operationSuivanteFalse;
	}
}
