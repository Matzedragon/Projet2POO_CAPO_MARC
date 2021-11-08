#include "Compteur.h"

Compteur::Compteur()
{
	Compteur::constructeur = 1;
	Compteur::constructeurCopie = 0;
	Compteur::destructeur = 0;
}

Compteur::~Compteur()
{
}

void Compteur::ajouterConstructeur()
{
	constructeur++;
}

void Compteur::ajouterConstructeurCopie()
{
	constructeurCopie++;
}

void Compteur::ajouterDestructeur()
{
	destructeur++;
}
