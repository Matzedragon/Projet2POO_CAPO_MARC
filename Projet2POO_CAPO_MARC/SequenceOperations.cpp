#include "SequenceOperations.h"

SequenceOperations::SequenceOperations()
{
    Compteur::ajouterConstructeur();
    m_operationDemarrage = nullptr;
}

SequenceOperations::~SequenceOperations()
{
    for (auto o: m_listeOperations) {
        delete o;
    }
    m_operationDemarrage = nullptr;
    Compteur::ajouterDestructeur();
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
