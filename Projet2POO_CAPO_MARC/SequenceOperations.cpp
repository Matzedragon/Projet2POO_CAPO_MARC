#include "SequenceOperations.h"

SequenceOperations::SequenceOperations()
{
    m_operationDemarrage = nullptr;
}

SequenceOperations::~SequenceOperations()
{
    for (auto o: m_listeOperations) {
        delete o;
    }
    m_operationDemarrage = nullptr;
}

SequenceOperations* SequenceOperations::ajouterOperation(Operation* operation)
{
    m_listeOperations.push_back(operation);
    return this;
}

void SequenceOperations::definirOperationDemarrage(Operation* operation)
{
    m_operationDemarrage = operation;
}
