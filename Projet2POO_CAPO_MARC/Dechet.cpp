#include "Dechet.h"
#include <iostream>
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
	this->poids = poids;
	id = 0;		// TODO 
	this->description = description;
	type = 0;
	couleur = "inconnue";
	materiel = INCONNU;
	purete = 100;
	styromousse = false;
	rigide = true;
}

Dechet::Dechet(int poids, string description, int type, string couleur, Materiel materiel, int purete, bool estEnStrynomousse, bool rigide) {
	id = 0;		// TODO 
	this->poids = poids;
	this->description = description;
	this->type = type;
	this->couleur = couleur;
	this->materiel = materiel;
	this->purete = purete;
	this->styromousse = estEnStrynomousse;
	this->rigide = rigide;
}

ostream& operator<<(ostream& out, const Dechet& dechet)
{
	out << "id: " << dechet.getId() << "\t" << endl 
		<< "poids: " << dechet.getPoids() << "\t" << endl
		<< "description: " << dechet.getDescription() << "\t" << endl
		<< "type: " << dechet.getType() << "\t" << endl
		<< "couleur: " << dechet.getCouleur() << "\t" << endl
		<< "materiel: " << dechet.getMateriel() << "\t" << endl
		<< "purete: " << dechet.getPurete() << "\t" << endl
		<< "styromousse: " << dechet.estStyromousse() << "\t" << endl
		<< "rigide: " << dechet.estRigide() << "\t" << endl;
	return out;
}