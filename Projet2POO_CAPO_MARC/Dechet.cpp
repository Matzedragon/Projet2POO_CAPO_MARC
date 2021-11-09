#include "Dechet.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int Dechet::m_idCourant = 0;

Dechet::Dechet()
{
	m_id = m_idCourant;
	m_idCourant++;
	setPoids(0);
	setDescription(""); // default "???"
	setType(0);
	setCouleur(""); // default = inconnu
	m_materiel = INCONNU;
	setPurete(100);
	m_styromousse = false;
	m_rigide = true;
	Compteur::ajouterConstructeur();
}

Dechet::~Dechet()
{
	Compteur::ajouterDestructeur();
}

Dechet::Dechet(int poids, string description) {
	m_id = m_idCourant;
	m_idCourant++;
	setPoids(poids);
	setDescription(description); // default "???"
	setType(0);
	setCouleur(""); // default "inconnu"
	m_materiel = INCONNU;
	setPurete(100);
	m_styromousse = false;
	m_rigide = true;
	Compteur::ajouterConstructeur();
}

Dechet::Dechet(int poids, string description, int type, string couleur, Materiel materiel, int purete, bool estEnStrynomousse, bool rigide) {
	m_id = m_idCourant;
	m_idCourant++;
	setPoids(poids);
	setDescription(description); // default "???"
	setType(type);
	setCouleur(couleur); // default = inconnu
	m_materiel = materiel;
	setPurete(purete);
	m_styromousse = estEnStrynomousse;
	m_rigide = rigide;
	Compteur::ajouterConstructeur();
}

ostream& operator<<(ostream& out, const Dechet& dechet)
{
	string description = "description: ";
	size_t fieldWidth =description.size()+1; 

	out << "--------------------------------------------------" << endl
		<< setw(fieldWidth) << left << "id: " << dechet.getId() << right << endl
		<< setw(fieldWidth) << left << "poids: " << dechet.getPoids() << right << endl
		<< setw(fieldWidth) << left << description << dechet.getDescription() << right << endl
		<< setw(fieldWidth) << left << "type: " << dechet.getType() << right << endl
		<< setw(fieldWidth) << left << "couleur: " << dechet.getCouleur() << right << endl
		<< setw(fieldWidth) << left << "materiel: " << GetNameOfMaterial(dechet.getMateriel()) << right << endl
		<< setw(fieldWidth) << left << "purete: " << dechet.getPurete() << right << endl
		<< setw(fieldWidth) << left << "styromousse: " << dechet.estStyromousse() << right << endl
		<< setw(fieldWidth) << left << "rigide: " << dechet.estRigide() << right << endl;
		
	return out;
}

void Dechet::setPoids(int poids) {
	if (poids < 0 || poids>100) {
		m_poids = 0;
	}
	else {
		m_poids = poids;
	}
}

void Dechet::setDescription(string description) {
	if (description.length() < 3) {
		m_description = "???";
	} else {
		m_description = description;
	}
}

void Dechet::setType(int type) {
	if (type >= 0 && type <= 7) {
		m_type = type;
	}
	else {
		m_type = 0;
	}
}

void Dechet::setCouleur(string couleur) {
	if (couleur != "vert" && couleur != "brun") {
		m_couleur = "inconnu";
	}
	else {
		m_couleur = couleur;
	}
}

void Dechet::setPurete(int purete) {
	if (purete < 1 || purete>100) {
		m_purete = 100;
	}
	else {
		m_purete = purete;
	}
}