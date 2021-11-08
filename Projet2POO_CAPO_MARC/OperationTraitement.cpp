#include "OperationTraitement.h"
#include "UsineTraitement.h"

OperationTraitement::OperationTraitement()
{
	m_usineTraitement = nullptr;
	/* Compteur::ajouterConstructeur(); */
}

OperationTraitement::OperationTraitement(UsineTraitement* usineTraitement)
{
	/* Compteur::ajouterConstructeur(); */
	m_usineTraitement = usineTraitement;
}
// not used here
bool OperationTraitement::effectuerOperation(Dechet* dechet)
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
