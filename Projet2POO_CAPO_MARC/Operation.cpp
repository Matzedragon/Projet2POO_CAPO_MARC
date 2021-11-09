#include "Operation.h"

Operation::Operation()
{
	Compteur::ajouterConstructeur();
	m_operationSuivanteTrue = nullptr;
	m_operationSuivanteFalse = nullptr;
}

Operation::Operation(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse)
{
	Compteur::ajouterConstructeur();
	m_operationSuivanteTrue = operationSuivanteTrue;
	m_operationSuivanteFalse = operationSuivanteFalse;
}

Operation::~Operation()
{
	Compteur::ajouterDestructeur();
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
