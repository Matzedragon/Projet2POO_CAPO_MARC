#pragma once
#include <string>
#include "Materiel.h"
using namespace std;
class Dechet
{
private:
	int poids;
	int id;
	string description;
	int type;
	string couleur;
	Materiel materiel;
	int purete;
	bool styromousse;
	bool rigide;
	static int idCourant; // TODO souligné dans le graphique, static ?
public:
	Dechet();
	int getPoids() { return poids; };
	int getId() { return id; };
	string getDescription() { return description; };
	int getType() { return type; };
	string getCouleur() { return couleur; };
	Materiel getMateriel() { return materiel; };
	int getPurete() { return purete; };
	bool estStyromousse() {return styromousse;};
	bool estRigide() { return rigide; };

	void setPoids(int poids);
	void setDescription(string description);
	void setType(int type);
	void setCouleur(string couleur);
	void setPurete(int purete);
	// TODO surcharge affichage (<<)
protected:
	Dechet(int poids, string description, int type, string couleur, Materiel materiel, int purete, bool estEnStrynomousse, bool rigide);
	Dechet(int poids, string description);
};

