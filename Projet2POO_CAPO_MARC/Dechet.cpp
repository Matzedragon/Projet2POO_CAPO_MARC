#include "Dechet.h"
#include <iostream>
#include <iomanip>

using namespace std;

int Dechet::idCourant = 0;

Dechet::Dechet()
{
	poids = 0;
	id = idCourant;
	description = "Quelque chose";
	type = 0;
	couleur = "inconnue";
	materiel = INCONNU;
	purete = 100;
	styromousse = false;
	rigide = true;
	idCourant++;
}

Dechet::Dechet(int poids, string description)
{
	id = idCourant;
	this->poids = poids;
	this->description = description;
	type = 0;
	couleur = "inconnue";
	materiel = INCONNU;
	purete = 100;
	styromousse = false;
	rigide = true;
	idCourant++;
}

Dechet::Dechet(int poids, string description, int type, string couleur, Materiel materiel, int purete, bool estEnStrynomousse, bool rigide) {
	id = idCourant;
	this->poids = poids;
	this->description = description;
	this->type = type;
	this->couleur = couleur;
	this->materiel = materiel;
	this->purete = purete;
	this->styromousse = estEnStrynomousse;
	this->rigide = rigide;
	idCourant++;
}

ostream& operator<<(ostream& out, const Dechet& dechet)
{
	string description = "description: ";
	size_t fieldWidth =description.size()+1; 

	out << setw(fieldWidth) << left << "id: " << dechet.getId() << right << endl
		<< setw(fieldWidth) << left << "poids: " << dechet.getPoids() << right << endl
		<< setw(fieldWidth) << left << description << dechet.getDescription() << right << endl
		<< setw(fieldWidth) << left << "type: " << dechet.getType() << right << endl
		<< setw(fieldWidth) << left << "couleur: " << dechet.getCouleur() << right << endl
		<< setw(fieldWidth) << left << "materiel: " << dechet.getMateriel() << right << endl
		<< setw(fieldWidth) << left << "purete: " << dechet.getPurete() << right << endl
		<< setw(fieldWidth) << left << "styromousse: " << dechet.estStyromousse() << right << endl
		<< setw(fieldWidth) << left << "rigide: " << dechet.estRigide() << right << endl;
	return out;
}