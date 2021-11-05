#include "Compteur.h"
#include <iomanip>

Compteur::Compteur()
{
}

Compteur::~Compteur()
{
}

void Compteur::ajouterConstructeur() const
{
	constructeur++;
}

void Compteur::ajouterConstructeurCopie() const
{
	constructeurCopie++;
}

void Compteur::ajouterDestructeur() const
{
	destructeur++;
}

ostream& operator<<(ostream& out, const Compteur& cpt)
{
	string description = "NB Constructeurs Copie : ";
	size_t fieldWidth = description.size() + 1;

	out << "-- COMPTEUR -- " << endl
		<< setw(fieldWidth) << left << "NB Constructeurs : " << cpt.constructeur<< right << endl
		<< setw(fieldWidth) << left << "NB Constructeurs Copie : " << cpt.constructeurCopie << right << endl
		<< setw(fieldWidth) << left << "NB Destructeurs : " << cpt.destructeur << right << endl
		<< "--------------------------------------------------" << endl;
	return out;
}