#include "SequenceOperations.h"

SequenceOperations::SequenceOperations()
{
    m_listeOperations = nullptr;
    m_operationDemarrage = nullptr;
}

SequenceOperations* SequenceOperations::ajouterOperation(Operation* operation)
{
    m_listeOperations = operation;
    definirOperationDemarrage(operation);
    return this;
}

void SequenceOperations::definirOperationDemarrage(Operation* operation)
{
    m_operationDemarrage = operation;
}
