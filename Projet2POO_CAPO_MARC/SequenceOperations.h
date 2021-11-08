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
#include <vector>
using namespace std;

class SequenceOperations
{
private:
	vector<Operation*> m_listeOperations;
	Operation* m_operationDemarrage;

public:
	SequenceOperations();
	~SequenceOperations();
	SequenceOperations* ajouterOperation(Operation* operation);
	void definirOperationDemarrage(Operation* operation);
	Operation* getOperationDemarrage() { return m_operationDemarrage; }
};

