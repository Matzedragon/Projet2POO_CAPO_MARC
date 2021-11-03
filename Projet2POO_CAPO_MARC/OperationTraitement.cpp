#include "OperationTraitement.h"

OperationTraitement::OperationTraitement()
{
	m_usineTraitement == nullptr;
}

OperationTraitement::OperationTraitement(UsineTraitement* usineTraitement)
{
	m_usineTraitement = usineTraitement;
}
// not used here
bool OperationTraitement::effecterOperation(Dechet* dechet)
{
	return true;
}

void OperationTraitement::creerDechetTraiteRecyclable(Dechet* dechet)
{
	m_usineTraitement->creerDechetTraiteRecyclable(dechet);
}

void OperationTraitement::creerDechetTraiteNonRecyclable(Dechet* dechet)
{
	m_usineTraitement->creerDechetTraiteNonRecyclable(dechet);
}

void OperationTraitement::creerDechetTraiteCompostable(Dechet* dechet)
{
	m_usineTraitement->creerDechetTraiteCompostable(dechet);
}
