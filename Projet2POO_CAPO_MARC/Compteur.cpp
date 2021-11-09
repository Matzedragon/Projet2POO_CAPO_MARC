#include "Compteur.h"

int Compteur::constructeur = 0;
int Compteur::constructeurCopie = 0;
int Compteur::destructeur = 0;

Compteur::Compteur()
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
