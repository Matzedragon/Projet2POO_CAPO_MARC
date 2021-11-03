#pragma once
#include "Operation.h"
#include "Operation1.h"
#include "Operation2.h"
#include "Operation3.h"
#include "Operation4.h"
#include "Operation5.h"
#include "Operation6.h"
#include "CreationDechetTraiteCompostable.h"
#include "CreationDechetTraiteNonRecyclable.h"
#include "CreationDechetTraiteRecyclable.h"

class SequenceOperations
{
private:
	Operation* listeOperations;
	Operation* operationDemarrage;

public:
	SequenceOperations();
	SequenceOperations();
	SequenceOperations* ajouterOperation(Operation* operation);
	void definirOperationDemarrage(Operation* operation);
	Operation* getOperationDemarrage() { return operationDemarrage; }
};

